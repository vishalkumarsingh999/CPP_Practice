/* 
 * File:   exp13_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 25 March, 2013, 8:56 AM
 */

#include <cstdlib>
#include<iostream>
#include<fstream>

using namespace std;

/*
 * 
 */
int  main()
{
	ofstream  outf("ITEM");
	cout<<"\n\n enter  the  itemm name : ";
	char  name[20];
	cin>>name;
	outf<<name<<"\n";
	cout<<"\nENTER  THE  ITEM  COST : ";
	float  cost;
	cin>>cost;
	outf<<cost<<"\n";
	outf.close();
	fstream  inf("ITEM");
	inf>>name;
	inf>>cost;
	cout<<"\n";
	cout<<"\nITEM  NAME : "<<name;
	cout<<"\nITEM  COST : "<<cost;

	inf.close();
	return  0;
}

