#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int j,a[10], b[10] , c[20],m,n,mn=0,k;   //mn is initial val of array c
cout<<"enter size of array a and b";
cin>>m>>n;
mn=m+n;
cout<<"enter elements of a";
for(int i=0; i<m; i++)
cin>>a[i];
cout<<"enter elements of b";
for(j=0; j<n; j++)
cin>>b[j];
void merge (int a[],int m , int b[], int n, int c[]); //declaration
merge(a,m,b,n,c);//calling
for( k=0; k<mn; k++)
cout<<c[k]<<" ";

getch();
return 0;
}
void merge(int a[],int m , int b[], int n, int c[])
{          int i,j,k;
for( i=0 , j=0 ,  k=0; i<m&&j<n;)
{

 if(a[i]<b[j])
 c[k++]=a[i++] ;
 else
 c[k++]=b[j++] ;
}
 if(i<m)
 {
 while(i<m)
 c[k++]=a[i++];
 }
 else
 {
 while(j<n)
 c[k++]=b[j++];
 }

}


