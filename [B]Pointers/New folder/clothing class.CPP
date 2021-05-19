#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
class clothing
{
private:
char code[5],type[10],material[15];
int size;
float price;
void calc_price()
 { if(strcmp(material,"cotton")==0)
    {
    if(strcmp(type,"trouser")==0)
    price=1500.0 ;
    else if(strcmp(type,"shirt")==0)
    price=1200.0;
    else
    cout<<"wrong choice";
    }
   else
   {
   if(strcmp(type,"trouser")==0)
    price=(1500.0-(0.25*1500.0)) ;
   else if(strcmp(type,"shirt")==0)
    price=(1200.0-(0.25*1200.0));
    else
    cout<<"wrong choice";
    }
 }
public:
clothing()
{
strcpy(code,"not assigned");
strcpy(type,"not assigned");
strcpy(material,"not assigned");
size=0;
price=0;
}
void enter()
{
cout<<"enter code"<<endl;
gets(code);
cout<<"enter type shirt/trouser";cout<<endl;
gets(type);
cout<<"enter material cotton/other(specify)"<<endl;
gets(material);
cout<<"enter size"<<endl;
cin>>size;
calc_price();
}
void display()
{
cout<<"code is "<<endl;
puts(code);
cout<<"type is "<<endl;
puts(type);
cout<<" material is "<<endl;
puts(material);
cout<<"size is \n";
cout<<size;
cout<<"price is " <<price;
}
};
clothing c;
void main()
{
system("cls");
c.enter();
c.display();
getch();
}


