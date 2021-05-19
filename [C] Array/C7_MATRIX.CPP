#include <iostream.h>
#include <conio.h>

void D_sum(int A[50][50],int m, int n)
{

 int i,j,s1=0,s2=0;
 for(i=0;i<n;i++)
 {
   for(j=0;j<m;j++)
   {
     if(i==j)
     {
       s1=s1+A[i][j];
     }
     if(i+j==n-1)
     {
       s2=s2+A[i][j];
     }
   }



 }
   cout<<"the sum of first diagonal="<<s1<<endl;
   cout<<"the sum of second diagonal="<<s2<<endl;
  }

  void R_product(int A[][50], int m,int n)
 {

    int rproduct=1,i,j;
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       rproduct*=A[i][j];
      }
   cout<<"product of "<<i+1<<"th row is "<<rproduct<<endl;
   }
   }

    void C_product(int A[50][50],int m,int n)
  {
    int cproduct=1,i,j;
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       cproduct*=A[j][i];
      }
   cout<<"product of "<<i+1<<"th coloumn is "<<cproduct<<endl;
   }
  }


   void main()
   {
     clrscr();
     int i,j,n,m,A[50][50];
     cout<<"enter the no. of rows of array"<<endl;
     cin>>n;
     cout<<"enter the no. of coloumns of array"<<endl;
     cin>>m;
     cout<<"enter the elements of array"<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
       {
	 cin>>A[i][j];
       }
     }
     cout<<"1.diagonal sum"<<endl;
     cout<<"2.row product"<<endl;
     cout<<"3.coloumn product"<<endl;
     int ch;
     cout<<"enter your choice"<<endl;
     cin>>ch;
     switch(ch)
     {
       case 1:
       if(m==n)
       {
       D_sum(A,m,n);
       }
       else
       {
       cout<<"not possible";
       }
       break;
       case 2 :
       R_product( A, m, n);
       break;
       case 3:
       C_product( A, m, n);
       break;
       default:
       cout<<"wrong choice";
       break;
     }
      getch();
      }
















