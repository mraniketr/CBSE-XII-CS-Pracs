#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
int rollno;char name[20];
node *link;
};   node *top;
class stack
{
public:
void push();
void pop();
void display();
stack()
{
top=NULL;
}
};

void stack::push()
{
 if(top==NULL)
 {top= new node;
 cout<<"enter roll no" ;
 cin>>top->rollno;
 cout<<"enetr name" ;
 gets(top->name);
 }
 else
 {
 node *temp;
 temp=new node;
 cout<<"enter roll no and name";
 cin>>temp->rollno;
 gets(temp->name);

  temp->link=top;
  top=temp;
 }
}
void stack::pop()
{
node*temp;
temp=top;
top=temp->link;
delete temp;
cout<<temp->rollno<<temp->name<<"Deleted";
 }
void stack:: display()
{
node *temp;
temp=top;
while(temp!=NULL)
{
cout<<temp->rollno;
cout<<temp->name;
temp=temp->link;
}
}
void main()
{      clrscr();
 stack a;
 char xx;      int xxx;
 do
 {     cout<<"Enter ch   1. Push   2. PoP    3. display"  ;
 cin>>xxx;
 if(xxx==1)
a.push();
if(xxx==2)
a.pop();
if(xxx==3)
a.display();
cout<<"do u wannna continue \n" ;  cin>>xx;
}while(xx=='y'||xx=='Y') ;
getch();

}
