#include<iostream.h>
#include<conio.h>
void main()
{  clrscr();
int a=20; int*b; b=&a;
int **c;c=&b;
int ***d; d=&c;
cout<<a<<endl;
cout<<b<<endl;
cout<<*b<<endl;
cout<<&b<<endl;
cout<<c<<endl;
cout<<&c<<endl;
cout<<*c;
getch() ;
}