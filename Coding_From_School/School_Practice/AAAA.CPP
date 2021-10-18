#include<iostream.h>
#include<conio.h>
struct Date
{int dd,mm,yyyy;
};
struct Student
{char stname[50];
int stclass,stroll;
Date stdob;
};
void main()
{clrscr();
 Student X;
 cout<<"Enter the following values:"<<"\n";
 cout<<"1. Student's Name:";
 cin>>X.stname;
 cout<<"2. Student's Class:";
 cin>>X.stclass;
 cout<<"3. Student's Roll No.";
 cin>>X.stroll;
 cout<<"4. Student's Date of Birth";
 cin>>X.stdob.dd>>X.stdob.mm>>X.stdob.yyyy;
 clrscr();
 cout<<"---------------OUTPUT----------------";
 cout<<"\n1. Student's Name:"<<X.stname;
 cout<<"\n2. Student's Class:"<<X.stclass;
 cout<<"\n3. Student's Roll No."<<X.stroll;
 cout<<"\n4. Student's Date of Birth:"<<X.stdob.dd<<X.stdob.mm<<X.stdob.yyyy;
 getch();
 }

