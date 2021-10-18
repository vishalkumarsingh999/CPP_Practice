/* 
 * File:   swap.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 10 January, 2013, 9:24 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
#include <cstdlib>

#include<iostream>


using namespace std;


/*
 *
 */

int swap(int *,int *);


int main()

{

int temp,a,b;

cout<<"Enter the value of a: ";

cin>>a;

cout<<"Enter the value of b: ";

cin>>b;


swap(&a,&b);

cout<<"Now the value of a: "<<a;


cout<<"\n Now the value of b: "<<b;



return 0;

}

int swap(int *a,int *b)

{

 int temp;

 temp=*a;

 *a=*b;

 *b=temp;

 return 0;

}



