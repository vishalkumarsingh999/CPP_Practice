/* 
 * File:   addtype.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 18 January, 2013, 1:32 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
class datatype
{
    int a,b;
    double x,y;
public:
    void addition(int,int);
    void addition(double,double);

};
void datatype :: addition(int a,int b)
{
   int c;
   cout<<"\t\t-:addion  of  the  integer  no :";
   cout<<"\nvalue of  a & b are as  follows:-\n";
   cout<<"\n\tvalue  of a :"<<a;
   cout<<"\n\tvalue  of a :"<<b;
   c=a+b;
   cout<<"\n\n\tadition  of  a & b : "<<c;
}
void datatype ::addition(double x, double y)
{
   double z;
   cout<<"\n\n\n\t\t-:addition  of the  float  numbers :-";
   cout<<"\n\nvalue of  x & y are as follows:-\n";
   cout<<"\n\tvalue of x :"<<x;
   cout<<"\n\tvalue of y :"<<y;
   z=x+y;
   cout<<"\n\n\tadition  of  x & y : "<<z;
}

int main()
{
    datatype d;
    d.addition(3,9);
    d.addition(1002.5,3056.5);
    return 0;
}

