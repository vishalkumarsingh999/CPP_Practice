#include<iostream.h>
#include<conio.h>
class book
{ private:
	 int bookno;
	 char bookname[30];
	 char authorob[30];
	 int edition;
	 char publishername[30];
	 int price;
   public:
	  void readdata();
	  void dispdata();
     }x;
 void book::readdata()
 {
   cout<<"enter book no";
   cin>>bookno;
   cout<<"enter bookname";
   cin>>bookname;
   cout<<"enter authorob";
   cin>>authorob;
   cout<<"enter edition";
   cin>>edition;
   cout<<"enter publishername";
   cin>>publishername;
   cout<<"price";
   cin>>price;
   };
   void main()book::dispdata()
   {
   cout<<"book no";
   cout<<"bookname";
   cout<<"authorob";
   cout<<"edition";
   cout<<"publishername";
   cout<<"price";
   }