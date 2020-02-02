from django.test import TestCase
from django.core import mail
from django.urls import reverse
from django.core.management import call_command
from faker import Faker


class TestStudents(TestCase):
    fake = Faker()
    # fixtures = ['db.json']

    def setUp(self) -> None:
        print('Setup')

    def tearDown(self) -> None:
        print('tearDown')

    @classmethod
    def setUpClass(cls):
        call_command('loaddata', 'db.json', verbosity=0)
        print('setUpClass')

    @classmethod
    def tearDownClass(cls):
        print('tearDownClass')

    def _gen_data(self):
        return {
            'subject': self.fake.word(),
            'text': self.fake.text(),
        }

    def test_contact_form(self):
        from students.models import Student
        breakpoint()
        data = {
            'email': self.fake.email(),
            **self._gen_data(),
        }
        # data.update(self._gen_data())

        response = self.client.post(reverse('contact'), data=data)
        assert response.status_code == 302

    def test_contact_form_wrong_email(self):
        data = {
            'email': 'wrong_email',
            **self._gen_data(),
        }
        response = self.client.post(reverse('contact'), data=data)
        assert response.status_code == 200

    def test_contact_form_empty_subject(self):
        data = {
            'email': self.fake.email(),
            'subject': '',
            'text': self.fake.text(),
        }
        response = self.client.post(reverse('contact'), data=data)
        assert response.status_code == 200
