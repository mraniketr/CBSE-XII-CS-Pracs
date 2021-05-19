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
};
void main()
{
clrscr();
X x;
char ll;
do
{
cout<<"1. enter msg \n 2.lc uc \n  " ;
int bb;
cin>>bb;
if(bb==1)
x.cfile();
if(bb==2)
x.cf1();
;
cout<<"wanna continue y/n";
cin>>ll;
}while(ll=='y'||ll=='Y');
getch();
}





