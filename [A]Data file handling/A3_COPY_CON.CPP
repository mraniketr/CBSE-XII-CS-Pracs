#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
int rollno; float marks; char name[20];
public:
student(int r,float m, char n[20])
{
strcpy(name,n);
rollno=r;
marks=m;
}
student()
{
strcpy(name,"abfgfgf");rollno=12;marks=90;
}
student(student &s1)
{
rollno=s1.rollno;
marks=s1.marks;
strcpy(name,s1.name)    ;
}

void display()
{
cout<<name<<marks<<rollno;
}
};
main()
{
student s1(11,99,"B");

student s2;
student s3(s1);
s1.display();
s2.display();
s3.display();
getch();
return 0;
}