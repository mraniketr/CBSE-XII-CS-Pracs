		   #include<iostream.h>
		   #include<conio.h>
		   class A
		   {
		   public:
		   int a,b,c;
		   void fibo(int n)
		   {
		   a=0, b=1;
		   cout<<a<<b;
		   for(int i=1; i<=n-2; i++)
		   {
		   c=a+b;
		   cout<<c;

		   a=b;
		   b=c;
		   }

		   }
		   };
		   main()
		   {
		   int n;
		   cin>>n;
		   A f;
		   f.fibo(n);
		   getch();
		   return 0;
		   }