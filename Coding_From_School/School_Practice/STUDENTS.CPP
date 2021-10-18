#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct date
{
 int d,m,y;
};
struct student
{
 char name[31],section[3];
 int cls,rn;
 date dob;
};
void main()
{
 clrscr();
 student learner;
 cout<<"Enter the following information:\n";
 cout<<"1-Student's Name : ";
 cin.getline(learner.name,31);
 cout<<"\n2-Student's Class : ";
 cin>>learner.cls;
 cout<<"\n3-Student's Section : ";
 gets(learner.section);
 cout<<"\n4-Student's Roll number : ";
 cin>>learner.rn;
 cout<<"\n5-Student's Date Of Birth(d m y) : ";
 cin>>learner.dob.d>>learner.dob.m>>learner.dob.y;
 clrscr();
 cout<<"----------OUTPUT-----------";
 cout<<"\n1-Name Of Student : ";
 puts(learner.name);
 cout<<"2-Class : ";
 cout<<learner.cls;
 cout<<"\n3-Section : ";
 puts(learner.section);
 cout<<"4-Roll Number : ";
 cout<<learner.rn;
 cout<<"\n5-Date Of Birth : "<<learner.dob.d<<'-'<<learner.dob.m<<'-'<<learner.dob.y;
 getch();
}