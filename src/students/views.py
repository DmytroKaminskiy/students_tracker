from django.http import HttpResponse, \
    HttpResponseRedirect, HttpResponseNotFound
from django.shortcuts import render

# Create your views here.
from students.models import Student


def generate_student(request):
    student = Student.generate_student()
    return HttpResponse(f'{student.get_info()}')


def students(request):
    queryset = Student.objects.all()
    response = ''

    print("request.GET.get('first_name')")
    fn = request.GET.get('first_name')
    if fn:
        # __contains LIKE %{}%
        # queryset = queryset.filter(first_name__contains=fn)

        # __endswith  LIKE %{}
        # queryset = queryset.filter(first_name__endswith=fn)

        # __startswith  LIKE {}%
        queryset = queryset.filter(first_name__istartswith=fn)

    for student in queryset:
        response += student.get_info() + '<br>'
        # response = response + student.get_info() + '<br>'
    print('queryset.query')
    print(queryset.query)
    return render(request,
                  'students_list.html',
                  context={'students_list': response})


def students_add(request):
    from students.forms import StudentsAddForm

    if request.method == 'POST':
        form = StudentsAddForm(request.POST)
        if form.is_valid():
            form.save()
            from django.urls import reverse
            return HttpResponseRedirect(reverse('students'))
    else:
        form = StudentsAddForm()

    return render(request,
                  'students_add.html',
                  context={'form': form})


def students_edit(request, pk):
    from students.forms import StudentsAddForm

    try:
        student = Student.objects.get(id=pk)
    except Student.DoesNotExist:
        return HttpResponseNotFound(f'Student with id {pk} not found')

    if request.method == 'POST':
        form = StudentsAddForm(request.POST, instance=student)
        if form.is_valid():
            form.save()
            from django.urls import reverse
            return HttpResponseRedirect(reverse('students'))
    else:
        form = StudentsAddForm(instance=student)

    return render(request,
                  'students_edit.html',
                  context={'form': form, 'pk': pk})


def contact(request):
    from students.forms import ContactForm

    if request.method == 'POST':
        form = ContactForm(request.POST)
        if form.is_valid():
            form.save()
            from django.urls import reverse
            return HttpResponseRedirect(reverse('students'))
    else:
        form = ContactForm()

    return render(request,
                  'contact.html',
                  context={'form': form})