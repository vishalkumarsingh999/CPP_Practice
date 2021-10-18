 /* 
 * File:   student.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 10 January, 2013, 9:29 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
//program  for  the  class
//batch : s2
//rno : 16

#include<iostream>
#include<cstdlib>

using namespace std;
class student
{
	int rno;
	char name[20];
	float p,c,b,per;
	public:
		void  getdata()
		{
			cout<<"enter  ur  rno :  ";
			cin>>rno;
			cout<<"enter  or name : ";
			cin>>name;
		}
		void getm()
		{
			cout<<"enter  the  marks  for  physics  : ";
			cin>>p;
			cout<<"enter  the  marks  for chemistry : ";
			cin>>c;
			cout<<"enter  the  marks  for  biology  : ";
			cin>>b;
		}
		void cal()
		{
			per=(p+b+c)/300*100;
			cout<<"percentage :"<<per;
		}
		void display()
		{
			cout<<"\n my  information=\nrno :"<<rno;
			cout<<"\n  name :"<<name;
			cout<<"\n  my  marks  :  \n  physics: "<<p;
			cout<<"\n  chemistry :"<<c;
			cout<<"\n  biology : "<<b;
			cout<<"\n  percentege  :" <<per;
		}

}s;
int  main()
{
	s.getdata();
	s.getm();
	s.cal();
	s.display();
	return 0;
}

