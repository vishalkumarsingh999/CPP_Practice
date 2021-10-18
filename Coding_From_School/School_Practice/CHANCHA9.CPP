#include<iostream.h>
#include<conio.h>
class employee
{
  private : int empno , empsal ;
	    char  empname[50];
  public : void readinf();
	   void dispinf();
};
 void employee :: readinf()
 {
  cout<<"Enter the employee no.\n";
  cin>>empno;
  cout<<"enter the employee name\n";
  cin>>empname;
  cout<<"Enter the employee salary\n";
  cin>>empsal;
 };
 void employee :: dispinf()
 {
  cout<<"Employee no=\n "<<empno;
  cout<<"Employee name =\n "<<empname;
  cout<<"employee salary =\n "<<empsal;
 };




 void main()
 {
  clrscr();
  employee x;
  x.readinf();
  x.dispinf();
 }

