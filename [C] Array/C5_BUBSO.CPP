#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int n, i , a[10] ,temp ;
cout<<"enter array size ";
cin>>n;
cout<<"enter elements";
for(i=0; i<n; i++)
{
cin>>a[i];
}
for(i=0; i<n; i++)
{
 for(int j=0; j<(n-1)-i; j++)
 {
  if(a[j]>a[j+1])
  {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1] =temp;
  }

 }


  for(int k=0; k<n; k++ )
  cout<<a[k]<<" ";
  cout<<endl;

 }
 getch();
 return 0;
 }














































































































































































































































































































































































































































































































































































































































































































































































































































































































































































