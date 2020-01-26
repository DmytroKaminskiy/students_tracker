from datetime import datetime

from faker import Faker
from django.db import models


class Student(models.Model):
    GRADE_CHOICES = (
        (1, 'FreshMan'),
        (2, 'Senior'),
    )

    # TODO
    grade = models.PositiveSmallIntegerField(choices=GRADE_CHOICES, default=1) # freshman, senior
    first_name = models.CharField(max_length=20)
    last_name = models.CharField(max_length=20)
    birth_date = models.DateField(null=True, blank=True, default=None)
    email = models.EmailField(unique=True)
    # add avatar TODO
    telephone = models.CharField(max_length=30)  # clean phone TODO
    address = models.CharField(max_length=255, null=True, blank=True)
    group = models.ForeignKey('students.Group',
                              null=True, blank=True,
                              on_delete=models.CASCADE)

    def save(self, *args, **kwargs):
        # pre_save
        # self.email = self.email.lower()
        super().save(*args, **kwargs)
        # post_save

    def get_info(self):
        return f'{self.first_name} {self.last_name} {self.birth_date}'

    @classmethod
    def generate_student(cls):
        fake = Faker()
        student = cls(
            first_name=fake.first_name(),
            last_name=fake.last_name(),
            birth_date=datetime.now().date(),
            email=fake.email(),
            telephone=fake.phone_number(),
        )
        student.save()
        return student

    def __str__(self):
        return f'{self.id} {self.full_name}'

    @property
    def full_name(self):
        return f'{self.first_name} {self.last_name}'


class Group(models.Model):
    name = models.CharField(max_length=128)


from students.signals import *   # TODO move to apps ready!
