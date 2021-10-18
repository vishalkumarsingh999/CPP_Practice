#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee
{
	private: char empname[50];
	int empno;
	float empsal;

	 public: void readdata();
	 void dispdata();
	 employee();
	 ~employee()
	 {cout<<"\nDESTRUCTING";}

};
void employee:: employee()
{empsal=50000;
};
void employee:: readdata()
{cout<<"Enter the following data";
 cout<<"\n 1.Employee Name:";
 gets(empname);
 cout<<"\n 2.Employee No.:";
 cin>>empno;
 cout<<"\n 3.Employee Salary:";
 cin>>empsal;
};
 void employee:: dispdata()
{cout<<"EMPLOYEE DATA";
 cout<<"\n1.Emlpoyee Name:";
 puts(empname);
 cout<<"2.Employee Number:"<<empno;
 cout<<"\n3.Employee Salary:"<<empsal;
};
 void main()
{ clrscr();
  employee X;
  X.readdata();
  clrscr();
  X.dispdata();
  getch();
}
