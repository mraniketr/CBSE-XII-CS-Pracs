  #include<iostream.h>
  #include<conio.h>
  #include<stdio.h>
  #include<fstream.h>


    int a,c;
    char ch;

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
    employee x[10];
    int obj;

   void write()
   {              cout<<"enter the no of objects";
   cin>>obj;
      for(int i=0;i<obj;i++){
    cout<<"employee"<<i+1<<"\n";
    x[i].getdata();
    }


    ofstream fo;
    fo.open("employee.dat",ios::out|ios::binary);
    for(int j=0;j<obj;j++)
    {
    fo.write((char*)&x[j],sizeof(x[j]));
    }
    fo.close();
    }

    void read()
    {     cout<<"enter the emp no u want to read";
    int empd;
    cin>>empd;
       ifstream fi;
    fi.open("employee.dat",ios::in|ios::binary);

    for(int b=0; b<obj; b++)
    {
     fi.read((char*)&x[b],sizeof(x[b]));
     if(empd==x[b].getno())
     {
     cout<<"the employee details are"<<"\n";
	x[b].putdata();
	}
     }
     fi.close();
    }
   int main()
   {clrscr();

    do{
    cout<<"1. Enter data"<<"\n";
    cout<<"2.Search details"<<"\n";
    cout<<"Enter the choice"<<"\n";
    cin>>c;
    if(c==1){
    write();
    }

    if(c==2){
  read();
	}
      cout<<"Do you want to continue?"<<"\n";
     cin>>ch;
     }
     while(ch=='y'||ch=='Y');
     getch();
     return 0;
     }

