from django.forms import ModelForm, Form, \
    EmailField, CharField, ValidationError
from django.core.mail import send_mail
from django.conf import settings

from students.models import Student


class StudentsAddForm(ModelForm):
    class Meta:
        model = Student
        fields = '__all__'


class StudentAdminForm(ModelForm):
    class Meta:
        model = Student
        fields = ('id', 'email', 'first_name', 'last_name', 'grade')

    def clean_email(self):
        email = self.cleaned_data['email'].lower()
        # filter(email=email) -> filter(email__exact=email)
        email_exists = Student.objects\
            .filter(email__iexact=email)\
            .exclude(email__iexact=self.instance.email)

        # if self.instance.email != email

        print(email_exists.query)
        if email_exists.exists():
            raise ValidationError(f'{email} is already used!')
        return email


class ContactForm(Form):
    email = EmailField()
    subject = CharField()
    text = CharField()

    def save(self):
        data = self.cleaned_data

        subject = data['subject']
        message = data['text']
        email_from = data['email']
        recipient_list = [settings.EMAIL_HOST_USER, ]
        send_mail(subject, message, email_from, recipient_list, fail_silently=False)
