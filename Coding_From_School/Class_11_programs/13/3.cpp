/* 
 * File:   exp13.3_16.cpp
 * Author: Vishal Kumar Singh
 * Created on 25 March, 2013, 9:57 AM
 */

#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

/*
 *
 */
int  main()
{
	const int size=80;
	char  line[size];
	ifstream  fin1 ,fin2;
	fin1.open("DESH");
	fin2.open("RAJDHANI");

	for(int  i=1;i<=10;i++)
	{
		if(fin1.eof() != 0)
		{
			cout<<"\nEXIT FROM  COUNTRY : \n";
			exit(1);

		}
	}

	fin1.getline(line, size);
	cout<<"CAPITAL  OF  : "<<line;
	if(fin2.eof() != 0)
	{
		cout<<"\n : exit  from  capital : \n";
		exit(1);
	}
	fin2.getline(line,size);
	cout<<line<<"\n";
	return 0;
}


