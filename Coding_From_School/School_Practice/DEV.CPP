#include<iostream.h>
#include<conio.h>
class book
{ private:
	 int bookno;
	 char bookname[30];
	 char author[30];
	 int edition;
	 char publisher[30];
	 int price;
   public:
	  void readdata();
	  void dispdata();
     }x;
 void book::readdata()
 {
   cout<<"enter book no";
   cin>>bookno;
   cout<<"enter book name";
   cin>>bookname;
   cout<<"enter author";
   cin>>author;
   cout<<"enter edition";
   cin>>edition;
   cout<<"enter publisher";
   cin>>publisher