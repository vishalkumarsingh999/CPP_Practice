/* 
 * File:   exp13.2_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 25 March, 2013, 9:44 AM
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
	
	ofstream  fout;
	fout.open("country");
	fout<<"BANGLADESH \n";
	fout<<" INDIA  \n";
	fout<<" CHINA \n";
	fout.close();

	fout.open("capital");

	fout<<"  WASHINGYTON"<<"\n";
	fout<<"    DEHLI"<<"\n";
	fout<<"       BIJJING"<<"\n";

	fout.close();
	const  int  N=90;
	char line[N];
	ifstream fin;
	fin.open("country");
	cout<<"CONTENTS   OF   COUNTRY :";
	while(fin)
	{
		fin.getline(line,N);
		cout<<line;
	}
	fin.close();
	fin.open("capital");
	cout<<"\n contents  of  capital  file : ";
	while(fin)
	{
		fin.getline(line , N);
		cout<<line;
	}
	fin.close();
	return 0;
}



