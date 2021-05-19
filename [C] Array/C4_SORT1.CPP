 #include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int i,j,n;
int a[1000];
cout<<"enter no of elements";
cin>>n;
cout<<"enter elements";
for(i=0; i<n; i++)
cin>>a[i];
for(i=0; i<n; i++)
{
int small, pos , temp ; small=a[i] ; pos=i;
 for(j=i+1; j<n; j++)
 {
  if (a[j]<small)
  { small=a[j];
   pos=j;
   }
  }
   temp=a[i];
    a[i]=a[pos];
    a[pos]=temp;
    for(int k=0; k<n; k++)
    {
     cout<<a[k]<<" ";
     }
     cout<<endl;
    }
     getch();
     return 0;
     }
