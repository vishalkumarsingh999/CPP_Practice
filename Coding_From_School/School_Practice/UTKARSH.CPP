#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a,b,c;
	float d,r1,r2;
	cout<<"Enter the values of a,b,c";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0)
	{
		cout<<"\n" <<"roots are real and unequal";
		r1= (-b+sqrt(d))/2*a;
		r2= (-b-sqrt(d))/2*a;
		cout<< "\n"<<"The value of root1 is:" << "\t"<<r1;
		cout<<"\n"<<"The value of root2 is:" <<"\t"<<r2;
		}
		else if(d==0)
			{
			 cout<< "\n" << "The roots are equal ";
			 r1=(-b+sqrt(d))/2*a;
			 cout << " The value of roots are : "<< "\t" << r1;
			 }
			 else
			 {
			 cout<< " The roots are imaginary " ;
			 }
		}