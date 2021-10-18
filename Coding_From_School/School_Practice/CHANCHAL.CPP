#include<iostream.h>
#include<conio.h>
 struct stud
{
 char name[40], sec[2], x;
 int roll_no[3], clas[2], dob[dd/mm/yyyy];
}
 void main()
 stud x
{
 clrscr();
 int n, i;
 cout<<"Enter the the number of students whose data have to be filled";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<"Enter the name of the student";
  cin>>x.name;
  cout<<"Enter the class of the student";
  cin>>x.clas;
  cout<<"Enter the roll no. of the student";
  cin>>x.roll_no;
  cout<<"Enter the sec of the student";
  cin>>x.sec;
  cout<<"Enter the DOB of the student";
  cin>>x.dob;
 }
  cout<<"               Information                 ";
  for(i=0;i<n;++i)
 {
  cout<<"name of the student"<<x.name<<"\n";
  cout<<"class of the student"<<x.clas<<"\n";
  cout<<"roll no. of the student"<<x.roll_no<<"\n";
  cout<<"sec of the student"<<x.sec<<"\n";
  cout<<"DOB of the student"<<x.dob<<"\n\n";
 }
}
