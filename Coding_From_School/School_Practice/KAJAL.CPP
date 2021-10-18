#include<iostream.h>
#include<conio.h>
struct date
{
int dd,mm,yyyy;
};
class student
{
 private:
	 int rol,std,mark;
	 char name[20],grade[5];
	 date dob;
 public:
	void readdata();
	char calcgr() ;
	void display();
 }x;
 void student::readdata()
 {
   cout<<"enter the roll no";
   cin>>rol;
   cout<<"enter the name";
   cin>>name;
   cout<<"enter the standard";
   cin>>std;
   cout<<"enter the date of birth";
   cin>>dob.dd>>dob.mm>>dob.yyyy;
   cout<<"enter the marks";
   cin>>mark;
 }
 char calcgr()
 {
  if(mark>90)
    grade='a+';
  else
  if(mark>80)
    grade='a';
 else
  if(mark>70)
    grade='b+';
  else if(mark>60)
    grade='b';
  else if(mark>40)
    grade='f';
  return grade;
  }
  void student::display()
  {
  cout<<"information of student:" ;
  cout<<"rollno"<<rol;
  cout<<"name"<<name;
  cout<<"std"<<std;
  cout<<"mark"<<mark;
  cout<<"dob"<<dd<<mm<<yyyy;
  }
  void main()
  {
  student x;
  x.display();
  x.readdata();
  x.calcgr();
  getch();
  }