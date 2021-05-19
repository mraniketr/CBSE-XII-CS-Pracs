#include<iostream.h>
#include<conio.h>

void altsum(int a[3][3])
{ int i,j;
 for(i=0; i<3; i++)
{	cout<<"enter "<<i+1<<"element" ;
	for(j=0; j<3; j++)
		{cin>>a[i][j];}
		}
	int s1=0;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3; j++)
	   {if((i+j)%2==0)
	   s1+=a[i][j] ;
	   }
	}cout<<"sum is "<<s1;
}
void revarr(int b[20])
{    int i,j,temp;
	  int cc;	cout<<"array size"; cin>>cc;
for( i=0; i<cc; i++)
{cout<<"enter "<<i+1<<"element" ;
cin>>b[i] ;
}
	for( i=0, j=(cc-1); i<cc/2; i++,j--)
	{
	temp=b[i];b[i]=b[j];b[j]=temp;
	}
	for(j=0; j<cc; i++){
	cout<<b[j]<<" ";}

}
void sum2(int a[3][3])

{ int s2=0;
int i,j;
		  for(i=0; i<3; i++)
	{cout<<"enter "<<i+1<<"element" ;
	for(j=0; j<3; j++)
		{cin>>a[i][j];}
	  }


	for(i=0;i<3;i++)
	{
	for(j=0;j<3; j++)
	{  if(a[i][j]%10==2)
	   s2+=	a[i][j] ;}
	}cout<<"sum is "<<s2;
}

void main()
{ clrscr();
int ch,a[3][3],b[20];
char uc;
do
{
cout<<"enter choice";
cout<<"1.sum of alternate elements \n 2. reverse content of 1d array \n 3.sum of 2d array with 2 as last digit ";
cin>>ch;
switch(ch)
{case 1:
altsum(a);
 break;
 case 2:
 revarr(b);
 break;
 case 3:
  sum2(a);
 break;
 default: cout<<"wrong choice" ;
 }
 cout<<"do u wannna continue" ;
 cin>>uc;
}while(uc=='y'||uc=='Y');
getch();
}

