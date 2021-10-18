#include<iostream.h>
#include<conio.h>
class employee
{private:
	 char name[50];
	 int empno;
	 int sal;
 public:
	void readdata();
	void dispdata();
 }x;
 void employee::readdata()
 {
 cout<<"Enter name:";
 cin>>name;
 cout<<"Emp no:";
 cin>>empno;
 cout<<"Enter salary:";
 cin>>sal;
 }
 void employee::dispdata()
 { clrscr();
 cout<<"\nName:"<<name;
 cout<<"\nEmp no.:"<<empno;
 cout<<"\nSalary:"<<sal;
 }
 void main()
 {clrscr();
 employee x;
 x.readdata();
 x.dispdata();
 getch();
}

