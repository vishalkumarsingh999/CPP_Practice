/* 
 * File:   virtualpoi_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 25 February, 2013, 9:27 AM
 */


#include<iostream>
#include<cstdlib>
using namespace  std;



class  Base
{
	public:
		void  display()
		{
			cout<<"\n\nDISPLAY  BASE";
		}
		 virtual void  show()
		{
			cout<<"\n\nSHOW  baseclass";
		}
};
class derived :public Base
{
	public:
		void  display()
		{
			cout<<"\n\nDISPLAY  DERIVED";
		}
		void show()
		{
			cout<<"\n\nSHOW  DERIVED";
		}
};
int  main()
{
	Base  B;
	derived D;
	Base *bptr;

	cout<<"\n\n -: B ptr points  to  BASE :-";
	bptr=&B;
	bptr -> display();
	bptr -> show();

	cout<<"\n\n -: B ptr points  to  DERIVED :-";
	bptr=&D;
	bptr -> display();
	bptr -> show();

	return  0;
}



