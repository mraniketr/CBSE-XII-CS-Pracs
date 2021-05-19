#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class school
{
char sname[34];
int sid;
char sad[60];

public:
void getdata()
{
cout<<"enter the school name"<<endl;
gets(sname);
cout<<"enter the school id"<<endl;
cin>>sid;
cout<<"enter adress"<<endl;
gets(sad);
}
void putdata()
{

cout<<"school name-";puts(sname);
cout<<"school ID-"<<sid<<endl;
cout<<"school adress-";puts(sad);
}

void write()
{
 school s;
s.getdata();
ofstream fo;
fo.open("school.dat",ios::out|ios::binary);
fo.write((char*)&s,sizeof(s));

fo.close();
}
int getschoolid()
{
return sid;
}

void display()
{
school s;
int  id;
ifstream fi;
fi.open("school.dat",ios::in|ios::binary);
cout<<"enter school id whose record you want to see"<<endl;
cin>>id;
while(fi.read((char*)&s,sizeof(s)))
{

if(s.getschoolid()==id)


 s.putdata();

 }
fi.close();
}


void delete_record()
{int stud;
cout<<"enter stud name";
cin>>stud;
    school s;
    ifstream inFile;
    inFile.open("school.dat", ios::binary);

    ofstream outFile;
    outFile.open("temp.dat", ios::out | ios::binary);
    
    while(inFile.read((char*)&s, sizeof(s)))
    {
        if(s.getschoolid() != stud)
        {
            outFile.write((char*)&s, sizeof(s));
        }
    }

    inFile.close();
    outFile.close();
    
    remove("school.dat");
    rename("temp.dat", "school.dat");
}
};
void main()

{  clrscr();
       school s;

char f;
int c;
do
{
cout<<"1.write data"<<endl;
cout<<"2.search and display data"<<endl;
cout<<"3. delete data" ;
cout<<"enter choice";
cin>>c;
if(c==1)

s.write();

if(c==2)
s.display();

if(c==3)
s.delete_record();
cout<<"wana continue";
cin>>f;
}
while(f=='y'||f=='Y') ;


getch();
}






























