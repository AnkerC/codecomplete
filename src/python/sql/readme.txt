����ѡ��ϵͳ���¸�ʽ�ı�

teacher:
id(PK),name,desc
class:
name(PK),teacherid(FK)
student:
id name age classid 

course:
name(PK),desc,teacherid(FK)

choose_course:
studentid(PK),courseid(PK),grade

student->course: ��Զ� choose_course�±�
student->class: ���һ
class->teacher: ���һ
course->teacher: ���һ

 