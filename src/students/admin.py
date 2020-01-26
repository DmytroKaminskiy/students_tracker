from django.contrib import admin

from students.models import Student, Group
from students.forms import StudentAdminForm


class StudentAdmin(admin.ModelAdmin):
    readonly_fields = ('email',)

    list_display = ('id', 'first_name',
                    'last_name', 'email', 'group')
    list_select_related = ('group',)
    list_per_page = 10
    form = StudentAdminForm

    def get_readonly_fields(self, request, obj=None):
        readonly_fields = super().get_readonly_fields(request, obj)

        if request.user.groups.filter(name='manager').exists():
            return readonly_fields + ('telephone',)
        return readonly_fields

    def has_delete_permission(self, request, obj=None):
        return False


class StudentAdminInline(admin.TabularInline):
    model = Student
    readonly_fields = ('email',)
    show_change_link = True


class GroupAdmin(admin.ModelAdmin):
    inlines = (StudentAdminInline,)


admin.site.register(Student, StudentAdmin)
admin.site.register(Group, GroupAdmin)
