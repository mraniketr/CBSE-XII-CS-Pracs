/* wap to create a class employeewith e name , e number
public:
getdata() , putdata() to input
create one object of this class and write the details on the
screeen and alsso read it
*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class employee
{
int e_num;
char name[20];
public:
void getdata()
{
cout<<"enter name";
gets(name);
cout<<"enter num";
cin>>e_num;
}
void putdata()
{
cout<<"details ";
cout<<e_num;
puts(name) ;
}
};
main()
{
employee s;
s.getdata();
ofstream fo;
fo.open("emp.dat",ios::out|ios::binary);
{
fo.write((char*)&s,sizeof(s));
}
fo.close();
ifstream fi;
fi.open("emp.dat",ios::in|ios::binary);
{
fi.read((char*)&s,sizeof(s)); }
s.putdata();
getch();
return 0;
}


































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































