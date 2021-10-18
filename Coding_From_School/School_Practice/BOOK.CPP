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
 clrscr();
   cout<<"Enter book no:";
   cin>>bookno;
   cout<<"Enter book name:";
   cin>>bookname;
   cout<<"Enter author:";
   cin>>author;
   cout<<"Enter edition:";
   cin>>edition;
   cout<<"Enter publisher:";
   cin>>publisher;
   cout<< "Enter price:";
   cin>>price;
   };
   void book::dispdata()
   {
   clrscr();
   cout<<"\nBook no.:"<<bookno;
   cout<<"\nBook name:"<<bookname;
   cout<<"\nAuthor:"<<author;
   cout<<"\nEdition:"<<edition;
   cout<<"\nPublisher:"<<publisher;
   cout<<"\nPrice:"<<price;
   };
   void main()
   x.readdata();
   x.dispdata();
   getch();


