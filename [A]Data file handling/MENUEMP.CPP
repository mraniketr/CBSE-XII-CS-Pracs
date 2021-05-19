  #include<iostream.h>
  #include<conio.h>
  #include<stdio.h>
  #include<fstream.h>

  class employee
  {
   int eno;
   char ename[20];

   public:

   void getdata()
   {
    cout<<"\nEnter the employee name"<<"\n";
    gets(ename);
    cout<<"Enter the employee number"<<"\n";
    cin>>eno;
    cout<<"\n";

    }

    void putdata()
   {cout<<"\n";
    cout<<"The employee name is"<<"\n";
    puts(ename);
    cout<<"The employee number is"<<"\n";
    cout<<eno;
    cout<<"\n";
    }

    int getno(){
    return eno;
    }

   };

   int main()
   {clrscr();
    employee x[3];
    int a,c;
    char ch;

    do{
    cout<<"1. Enter data"<<"\n";
    cout<<"2.Search"<<"\n";
    cout<<"Enter the choice"<<"\n";
    cin>>c;
    if(c==1){
     for(int i=0;i<3;i++){
    cout<<"employee"<<i+1<<"\n";
    x[i].getdata();
    }


    ofstream fo;
    fo.open("employee.dat",ios::out|ios::binary);
    for(int j=0;j<3;j++)
    {
    fo.write((char*)&x[j],sizeof(x[j]));
    }
    fo.close();
    }

    if(c==2){
     ifstream fi;
    fi.open("employee.dat",ios::in|ios::binary);
    cout<<"Enter the employee number of the employee whose details are to be displayed"<<"\n";
    cin>>a;

    for(int b=0;b<3;b++)
    {
     fi.read((char*)&x[b],sizeof(x[b]));
     if(x[b].getno()==a){
     cout<<"the employee details are"<<"\n";
     x[b].putdata();
     }

     }
     }
      cout<<"Do you want to continue?"<<"\n";
     cin>>ch;
     }
     while(ch=='y'||ch=='Y');
     getch();
     return 0;
     }

