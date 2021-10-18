/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 10 January, 2013, 9:09 AM
 */

#include <cstdlib>

#include<iostream>

float interest(float,float,float=0.15);


using namespace std;


/*
 *
 */

int main()
{

 float t,p,n,r;

 cout<<"Enter the value of P: ";

 cin>>p;

 cout<<"Enter the value of N: ";

 cin>>n;

 t=interest(p,n);

 cout<<"The amount of interest is: "<<t;

 return 0;

}

float interest(float p,float n,float r)

{

 float t;

 t=(p*n*r/100);

 return(t);

}


