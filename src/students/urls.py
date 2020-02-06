from django.urls import path

from students.views import (
    generate_student, students,
    students_add, students_edit,
    contact, register, custom_login,
)

urlpatterns = [
    path('gen/', generate_student),
    path('list/', students, name='students'),
    path('add?add/', students_add, name='students-add'),
    path('edit/<int:pk>/', students_edit, name='students-edit'),
    path('contact/', contact, name='contact'),

    path('register/', register, name='register'),
    path('login/', custom_login, name='login'),
]
