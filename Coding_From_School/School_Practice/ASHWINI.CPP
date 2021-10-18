#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student
{ private: int roll;
	   char name[50], clas[5];
     public: void readdata();
	     void dispdata();
     }X;
void student::readdata()
{ cout<<"\n Enter the roll number:";
cin>>roll;

cout<<"\n Enter the name:";
gets(name);
cout<<"\n Enter the class:";
gets(clas);
}
void student::dispdata()
{
 cout<<"Roll:"<<roll<<endl;
 cout<<"Name:"<<name<<endl;
 cout<<"Class:"<<clas<<endl;
 }
 void main()
 { student X;
 X.readdata();
 X.dispdata();
 getch();
 }