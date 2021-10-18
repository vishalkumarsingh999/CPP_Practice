

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class STD
{
private:char name[100];
	int rollno;
	long float marks;



public: void read();
	void disp();


	STD()
	{
       cout<<"\n ULTIMATE PROGRAMMER"

;	}


};
void STD :: read()
{
cout<<"\n Enter the student name:-";
gets(name);
cout<<"\n Enter the student roll  no:-";
cin>>rollno;
cout<<"\n Enter the marks:-";
cin>>marks;
}
void STD:: disp()
{
cout<<"\n The student name:-"<<name;
cout<<"\n student roll no:-"<<rollno;
cout<<"\n student marks:-"<<marks;
STD();
};

void main()
{
STD A ;
clrscr();
A.read();
A.disp();
getch();
}