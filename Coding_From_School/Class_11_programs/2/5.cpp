/* 
 * File:   factorial.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 10 January, 2013, 9:25 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int factorial(int);

int main()

{

 int  n=1;

 cout<<"enter  the  value  for factorisation  =  ";

 cin>>n;


 cout<<"factrial  of  the  no  =  "<<factorial( n );


  return 0;

}

 int factorial(int x)

{

 int f;


 if(x==1)

 {

 return 1;

 }

 else

 {

 f=x*factorial(x-1);

 return(f);


 }


}

