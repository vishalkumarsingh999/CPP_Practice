#include<conio.h>
#include<iostream.h>
 class emplloye
 {
 private:
 int empno;
 char empname[30];
 public:
 void readdata();
 void dispdata();
 };
 void emplloye::readdata()
 {
 cout<<"enter emplloye number";
 cin>>empno;
 cout<<"enter emplloye name";
 cin>>empname;
 };
 void emplloye::dispdata()
{
cout<<"emplloye no"<<empno;
cout<<"emplloye name"<<empname;
 };
 void main ()
 { clrscr();
 emplloye x;
 x.readdata();
 x.dispdata();
 };