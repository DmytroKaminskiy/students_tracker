from django.http import HttpResponse, \
    HttpResponseRedirect, HttpResponseNotFound
from django.shortcuts import render

# Create your views here.
from students.models import Student


def generate_student(request):
    student = Student.generate_student()
    return HttpResponse(f'{student.get_info()}')


def students(request):
    queryset = Student.objects.all().select_related('group')
    fn = request.GET.get('first_name')
    if fn:
        queryset = queryset.filter(first_name__istartswith=fn)

    return render(request,
                  'students_list.html',
                  context={'students': queryset})


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
                  context={'form': form, 'title': 'add student'})


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