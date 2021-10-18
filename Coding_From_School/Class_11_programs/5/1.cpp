/*
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 30 January, 2013, 12:14 PM
 */


#include <cstdlib>
#include<iostream>
using namespace std;
class square
{

    int a;
    float b;
    double c;
public:
    int sq(int x)
    {
        return (x*x);
    }
    float sq(float y)
    {
        return (y*y);
    }
    double sq(double z)
    {
        return (z*z);
    }

};
/*
 *
 */
int main(int argc, char** argv)
{
    square s;
    int p=s.sq(2);
    float q=s.sq(3.0);
    double r=s.sq(75.0);
    cout<<"Square of 2 is "<<p<<"\n";
    cout<<"Square of 3.0 is "<<q<<"\n";
    cout<<"Square of 75.0 is "<<r<<"\n";


    return 0;
}

