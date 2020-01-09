from django.http import HttpResponse, HttpResponseRedirect
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
            return HttpResponseRedirect('/students/')
    else:
        form = StudentsAddForm()

    return render(request,
                  'students_add.html',
                  context={'form': form})
