#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class EMP
{
private:char ename[100];
	int eno;
	long float sal;



public: void read();
	void disp();


	EMP()
	{
       cout<<"\n Not enogh"
;
	}


};
void EMP :: read()
{
cout<<"\n Enter the employee name:-";
gets(ename);
cout<<"\n Enter the employee no:-";
cin>>eno;
cout<<"\n Enter the salary:-";
cin>>sal;
}
void EMP:: disp()
{
cout<<"\n The Employee name:-"<<ename;
cout<<"\n Emp no:-"<<eno;
cout<<"\n Emp salary:-"<<sal;
EMP();
}

void main()
{
 EMP A ;
clrscr();
A.read();
A.disp();
getch();
}