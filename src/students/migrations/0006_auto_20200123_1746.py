# Generated by Django 2.2.9 on 2020-01-23 17:46

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('students', '0005_auto_20200119_1057'),
    ]

    operations = [
        migrations.AlterField(
            model_name='student',
            name='telephone',
            field=models.CharField(max_length=30),
        ),
    ]
