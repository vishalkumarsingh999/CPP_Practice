/* 
 * File:   static.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 11 January, 2013, 11:08 AM
 */

#include<cstdlib>
#include<iostream>
using namespace std;
class test
{
	int code;
	static int count;
	public:
	void setcode(void)
	{
		code=++count;
	}
	int showcode(void)
	{
		cout<<"Object number:"<<code<<"\n";
	}
	static void showcount(void)
	{
		cout<<"count:"<<count<<"\n";
	}
};

int test::count;

int main()
{
	test t1,t2;
	t1.setcode();
	t2.setcode();

	test::showcount();

	test t3;
	t3.setcode();

	test::showcount();

	t3.showcode();
	t2.showcode();
	t1.showcode();


}