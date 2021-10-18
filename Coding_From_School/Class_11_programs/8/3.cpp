/* 
 * File:   runrime_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 25 February, 2013, 9:28 AM
 */


#include<iostream>
#include<cstdlib>
#include<cstring>
//#include<conio.h>
using namespace std;

class media
{
	protected:
		char title[20];
		float price;
	public:
		media(char *s,float a)
		{
			strcpy(title,s);
			price =a;
		}
		virtual void  display()
		{

		}
};
class book :public media
{
	int  pages;
	public:
		book(char *s,float a,int p):media(s,a)
		{
			pages = p;
		}
		void  display();


};
class tape :public media
{
	float time;
	public :
		tape(char  *s,float a,float t) : media(s,a)
		{
			time = t;
		}
		void  display();
};
void book :: display()
{
	cout<<"\n\nTITLE : "<<title;
	cout<<"\n\npages : "<<pages;
	cout<<"\n\nPRICE : "<<price;
}
void tape :: display()
{
	cout<<"\n\nTITLE : "<<title;
	cout<<"\n\nPLAY  TIME : "<<time<<"mins";
	cout<<"\n\nPRICE : "<<price;
}

int  main()
{
	char *title = new char[10];
	float price,time;
	int  pages;
	
	cout<<"\n\nENTER  THE  BOOK  DEUTAILS  : ";
	cout<<"\n\nTITLE : ";
	cin>>title;
	cout<<"\n\nPRICE : ";
	cin>>price;
	cout<<"\n\nPAGES : ";
	cin>>pages;

	book book1(title,price,pages);

	cout<<"\n\nENTER  THE  TAPE  DEUTAILS  : ";
	cout<<"\n\nTITLE : ";
	cin>>title;
	cout<<"\n\nPRICE : ";
	cin>>price;
	cout<<"\n\nPLAY  TIMES : ";
	cin>>time;
	cout<<"\n\ntime  in  mintutes : "<<time;
	tape tape1(title,price,time);

	media *list[2];
	list[0]=&book1;
	list[1]=&tape1;
	cout<<"\n\n\t        -:  MEDIA  DETAILS  :-";
	cout<<"\n\n\t     ............BOOK ...........";
	list[0] ->display();

	cout<<"\n\n\t     ............TAPE.............";
	list[1] -> display();
	return  0;
}






