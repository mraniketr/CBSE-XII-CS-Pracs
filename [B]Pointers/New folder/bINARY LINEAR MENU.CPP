int num,a[12],i,el,ch;char uc;
#include<iostream.h>
#include<conio.h>
void bsearch()
{


 int lb=0 , ub=num,m;
  while(lb<=ub)
  {
  m=(lb+ub) /2;
  if(el==a[m])
  {
  cout<<"element found at"<<m+1;
  break;
  }
  else if(el>a[m])
  lb=m+1;
  else
  ub=m-1;
 }

}

void lsearch()
{
 for(int i=0; i<num; i++)
  {
   if(el==a[i])
    {
   cout<<"element found at"<<i+1;
   break;
     }
   }

}

void main()
{clrscr();

do
{
 cout<<" 1. enter array \n 2.search element \n 3.linear search \n 4. binary search";
 cin>>ch;
 if(ch==1)
 {         cout<<"enter number of elements";

 cin>>num;
  cout<<"enter array in ascending/desending order";
  for(i=0; i<num; i++)
  {
  cin>>a[i];
  }
 }
 if(ch==2)
 {
  cout<<"enter el to search" ;
  cin>>el;
 }
if(ch==3)
 {
lsearch();
}
if(ch==4)
 {
 bsearch();
 }
cout<<"do u wanna continue" ;
cin>>uc;
}while(uc=='y'||uc=='Y')  ;
getch();
}
