#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <string.h>
#include <math.h>
#include <process.h>
#define pi (3.14285)
void call_main();
long double pow10(long double x)
 {
	 long double z=1;
	 for (int i=1;i<=x;x++)
	 {
		 z*=10;
	 }
	 return z;
 }
void call_relational()
{
    long double x,y;
	int ch=0;
	do
	{
		cout<<"\nEnter two numbers : ";
		cin>>x>>y;
		if (x>y)
			cout<<"\n"<<x<<" is greater than "<<y;
		else if (x<y)
			cout<<"\n"<<x<<" is smaller than "<<y;
		else if (x==y)
			cout<<"\n"<<x<<" = "<<y;
		cout<<"\n\n(0)Continue (1)Back";
		cout<<"\n\nEnter : ";
		cin>>ch;
	}
		while (ch==0);
		if (ch==1)
			call_main();

}
void calculate_value(char tname[70],int &f_ch,int t_f_ch)
{
	float x,y;
	cout<<"\n";
	cout.write(tname,strlen(tname));
	cout<<' ';
	cin>>x;
	y=pi/180*x;
	cout<<"\nAns-"<<setprecision(2);
	switch (t_f_ch)
	{
	case 1:cout<<sin(y);
	       break;
	case 2:cout<<cos(y);
	       break;
	case 3:cout<<tan(y);
	       break;
	case 4:cout<<1/sin(y);
	       break;
	case 5:cout<<1/cos(y);
	       break;
	case 6:cout<<1/tan(y);
	       break;
	
	}
	cout<<"\n\nPress 1 to go back and 0 to continue : ";
	cin>>f_ch;
}
void calculate_degree(char tname[70],int &f_ch,int t_f_ch)
{
	float x,y;
	cout<<"\n";
	cout.write(tname,strlen(tname));
	cout<<" x = ";
	cin>>y;
	cout<<"\n\n=> x = ";
	switch (t_f_ch)
	{
	case 1:x=asin(y);
	       cout<<setprecision(2)<<180/pi*x<<" Degree";
	       break;
	case 2:x=acos(y);
	       cout<<setprecision(2)<<180/pi*x<<" Degree";
	       break;
	case 3:x=atan(y);
	       cout<<setprecision(2)<<180/pi*x<<" Degree";
	       break;
	case 4:x=asin(1/y);
	       cout<<setprecision(2)<<180/pi*x<<" Degree";
	       break;
	case 5:x=acos(1/y);
	       cout<<setprecision(2)<<180/pi*x<<" Degree";
	       break;
	case 6:x=atan(1/y);
	       cout<<setprecision(2)<<180/pi*x<<" Degree";
	       break;
	
	}
	cout<<"\n\nPress 1 to go back and 0 to continue : ";
	cin>>f_ch;
}
void call_value()
{
	float x,y;
	int ch;
	int t_ch;
	do
	{
		cout<<"\n\n1.sin\t2.cos\t3.tan\t4.cosec\t5.sec\t6.cot";
		cout<<"\n\nPress 1, 2, 3, 4, 5 or 6 to continue : ";
		cin>>t_ch;
		switch (t_ch)
		{
		case 1:calculate_value("sin",ch,t_ch);
			   break;
		case 2:calculate_value("cos",ch,t_ch);
			   break;
		case 3:calculate_value("tan",ch,t_ch);
			   break;
		case 4:calculate_value("cosec",ch,t_ch);
			   break;
		case 5:calculate_value("sec",ch,t_ch);
			   break;
		case 6:calculate_value("cot",ch,t_ch);
			   break;
		
		}
	}
		while (ch!=1);
		if (ch==1)
		{
			void call_tmain();
			call_tmain();
		}
}
void call_degree()
{
	float x,y;
	int ch;
	int t_ch;
	do
	{
		cout<<"\n\n1.sin\t2.cos\t3.tan\t4.cosec\t5.sec\t6.cot";
		cout<<"\n\nPress 1, 2, 3, 4, 5 or 6 to continue : ";
		cin>>t_ch;
		switch (t_ch)
		{
		case 1:calculate_degree("sin",ch,t_ch);
			   break;
		case 2:calculate_degree("cos",ch,t_ch);
			   break;
		case 3:calculate_degree("tan",ch,t_ch);
			   break;
		case 4:calculate_degree("cosec",ch,t_ch);
			   break;
		case 5:calculate_degree("sec",ch,t_ch);
			   break;
		case 6:calculate_degree("cot",ch,t_ch);
			   break;
		
		}
	}
		while (ch!=1);
		if (ch==1)
		{
			void call_tmain();
			call_tmain();
		}
}
void call_tmain()
{
	int ch=0;
	do
	{
	    cout<<"\n(1)Value (2)Degree (3)Back\n";
		cout<<"\nEnter(1/2/3) : ";
		cin>>ch;
		switch (ch)
		{
		case 1: call_value();
		        break;
		case 2: call_degree();
		        break;
		case 3: call_main();
		        break;
		default:ch=0;
		        break;
		
		}
	}
	while (ch==0);
	
}
void call_math()
 {
	 void call_main();
	 int ch,m_ch=0;
	 long double x;
	 cout<<"\nFor variable x :-\n\n(1)1/x";
	 cout<<"\n\n(2)modulus\n\n(3)ceil(Rounds x upwards)\n\n(4)log x";
	 cout<<"\n\n(5)x^3\n\n(6)x^2\n\n(7)square root\n\n(8)10^x";
	 cout<<"\n\n(9)ln x\n\n(10)floor(Rounds x downwards)\n\n(11)Back\n";
	 do
	 {
	     cout<<"\nEnter your choice(1/2/3/4/5/6/7/8/9/10/11) : ";
	     cin>>ch;
		 switch (ch)
		 {
		 case 1 : cout<<"\nScientific (1/x) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (1/x) << "<<1/x;
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 2 : cout<<"\nScientific (Mod) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (Mod) << "<<fabs(x);
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 3 : cout<<"\nScientific (ceil) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (ceil) << "<<ceil(x);
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 4 : cout<<"\nScientific (log x) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (log x) << "<<log10(x);
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 5 : cout<<"\nScientific (x^3) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (x^3) << "<<x*x*x;
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 6 : cout<<"\nScientific (x^2) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (x^2) << "<<x*x;
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 7 : cout<<"\nScientific (Square root) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (Square root) << "<<sqrt(x);
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 8 : cout<<"\nScientific (10^x) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (10^x) << "<<pow10(x);
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 9 : cout<<"\nScientific (ln x) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (ln x) << "<<log(x);
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 10: cout<<"\nScientific (floor) >> Enter x : ";
		          cin>>x;
				  cout<<"\nScientific (floor) << "<<floor(x);
				  cout<<"\n\nEnter (11)Back\t(0)Continue : ";
				  cin>>m_ch;
				  break;
		 case 11: call_main();
				  break;
	     default: ch=0;
		          break;
		 }
	 }
	 while (m_ch!=11);
	 if (m_ch==11) call_main();
 }
 void call_arth()
 {
	 long double x,y;
	 char op,ch;
	 do
     {
		 
	     cout<<"\nArithmetic >> ";
	     cin>>x>>op>>y;
	     switch (op)
	     {
	     case '+':cout<<"\nArithmetic << "<<x+y;
	              cout<<"\n\nContinue(Y/N) : ";
			      cin>>ch;
	            break;
	     case '-':cout<<"\nArithmetic << "<<x-y;
	 	         cout<<"\n\nContinue(Y/N) : ";
			      cin>>ch;
	              break;
	     case '*':cout<<"\nArithmetic << "<<x*y;
	 	          cout<<"\n\nContinue(Y/N) : ";
			      cin>>ch;
	              break;
	     case '/':cout<<"\nArithmetic << "<<x/y;
	              cout<<"\n\nContinue(Y/N)? : ";
			      cin>>ch;
	              break;
	     default :ch='Y';
		          break;
	    }
	 }
	 while (ch!='N');
	 if (ch=='N')
	 {
		 void call_main();
		 call_main();
	 }
	 
 }
void call_main()
 {
	 long double x,y;
	 int ch=0;
	 do
	 {
		 cout<<"\n1-Arithmetic Operations\n\n2-Scentific Operations\n\n3-Trignometric Operations\n";
		 cout<<"\n4-Relational Operations\n\n5-Exit\n\n";
	     cout<<"Enter your option (1/2/3/4/5) : ";
	     cin>>ch;
	     switch (ch)
	      {
		 case 1: call_arth();
			 break;
		 case 2: call_math();
			 break;
		 case 3: call_tmain();
			 break;
		 case 4: call_relational();
			 break;
		 case 5: exit(0);
				 break;

			 default: ch=0;
		  }
	 }
	 while (ch==0);
 }
void main()
 {
	 clrscr();
	 cout<<"---------CALCULATOR--------\n\n";
	 cout<<"------MADE BY RAGHVENDRA ADITYA------\n";
	 call_main();
 }