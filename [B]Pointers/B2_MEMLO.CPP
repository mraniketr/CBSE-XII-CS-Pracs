#include<iostream.h>
#include<conio.h>
void main()
{
int *roll    ;
float *marks;
int n;
cout<<"enter n";
cin>>n;
roll= new int[n];    // only accessed by roll not any oth var
marks=new float[n];
cout<<"enter elements";
for(int i=0; i<n; i++)
{
cout<<"roll marks";
cin>>roll[i]>>marks[i] ;
}
for(i=0; i<n; i++)
{
cout<<"r no \t"<<roll[i]<<" marks \t"<<marks[i]<<endl;
}
getch();
}















































































































































































































































































