#include<iostream.h>
#include<conio.h>
main()
{
int n, flag=0;
int a[10]={1,2,3,4,5,6,7,8,9,10};
cout<<"enter number of element";
cin>>n;
for(int i=0; i<10; i++)
{
if(a[i]==n)
{       flag=1;
break;
}
}
if( flag==0 )
cout<<"el not found";
if(flag==1)
cout<<"el founmd" ;

getch();
return 0;
}