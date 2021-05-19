/* wap menu based to create text file reasultt.txt and find
 1.count of uc and lc characters
 2.count words 'this ' and  'there'
 3.count the no of words starts woth a or A.
 */

#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
class X
{
public:
char msg[100];
void cfile()
{
ofstream fo("result.txt");
cout<<"en.ter text";
gets(msg);
fo<<msg;
fo.close();
}
void cf1()
{ int  c1=0,c2=0 ;
char ch;

ifstream fi;
fi.open("result.txt",ios::in);
while(!fi.eof())
{
fi.get(ch);
if(isupper(ch))
c1++     ;
if(islower(ch))
c2++     ;
}
cout<<"uc "<<c1<<"  lc "<<c2;
}
void cf2()
{
int c3=0,c4=0;
char wo[10];
ifstream fi;
fi.open("result.txt",ios::in);
while(!fi.eof())
{
fi>>wo;
if(strcmp(wo,"these")==0)
c3++;
if(strcmp(wo,"this")==0)
c4++;
}
cout<<" this " <<c4;
cout<<" that"<<c3;
}
void cf3()
{
int c5=0;
char tx[10];
ifstream fi;
fi.open("result.txt",ios::in);
while(!fi.eof())
{
fi>>tx;
if(tx[0]=='a'||tx[0]=='A')
c5++ ;
}
cout<<" a||A "<<c5;
}
};
void main()
{
clrscr();
X x;
char ll;
do
{
cout<<"1. enter msg \n 2.lc uc \n  3. check these or this \n 4. check a A" ;
int bb;
cin>>bb;
if(bb==1)
x.cfile();
if(bb==2)
x.cf1();
if(bb==3)
x.cf2();
if(bb==4)
x.cf3();
cout<<"wanna continue y/n";
cin>>ll;
}while(ll=='y'||ll=='Y');
getch();
}





