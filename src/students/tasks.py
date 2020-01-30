from celery import shared_task

from students.models import Student


@shared_task
def add(x, y):
    print('Student.objects.count()')
    print(Student.objects.count())
    return x + y
