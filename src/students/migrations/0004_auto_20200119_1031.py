# Generated by Django 2.2.9 on 2020-01-19 10:31

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('students', '0003_auto_20200109_1728'),
    ]

    operations = [
        migrations.AlterField(
            model_name='student',
            name='birth_date',
            field=models.DateField(blank=True, default=None, null=True),
        ),
    ]
