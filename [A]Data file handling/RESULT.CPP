#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
class result
{
public:
void createfile()
{


char msg[200];
cout<<"enter the message";
gets(msg);
ofstream fo;
fo.open("result.txt",ios::out);
fo<<msg;

}




void count1()
{
int c1=0,c2=0;
char ch;
ifstream fi;
fi.open("result.txt",ios::in);
while(!fi.eof())
{
fi.get(ch);
if(islower)

c1++;

if(isupper)

c2++;

}
cout<<"count of lower is";
cout<<c1<<endl;
cout<<"count of upper is";
cout<<c2<<endl;
}



void count2()
{
int c3=0,c4=0;
char wo[20];
ifstream fi;
fi.open("result.txt",ios::in);
while(!fi.eof())
{

fi>>wo;
if(strcmp(wo,"these")==0)
c3++;
if(strcmp(wo,"there")==0)
c4++;

}
cout<<"number of 'these'is:";
cout<<c3<<endl;
cout<<"number of 'there' is:";
cout<<c4<<endl;
}


void count3()
{
char word[10];
int c5=0;
ifstream fi;
fi.open("result.txt",ios::in);
while(!fi.eof())
{


 fi>>word;
 if(word[0]=='A'||word[0]=='a')
 c5++;

 }

cout<<"number of wors starting with a letter is:";
cout<<c5;
}

};



void main()
{
  clrscr();
int n;char sv;
cout<<"1-messg,2-lower and upper case,3-these and there,4-starts a";
cin>>n;
result r;
do
{
if(n==1)
r.createfile();
if(n==2)
r.count1();
if(n==3)
r.count2();
if(n==4)
r.count3();
cout<<"wanna continue";
cin>>sv;
}while
if(sv=='y'||sv=='Y')

getch();
}










