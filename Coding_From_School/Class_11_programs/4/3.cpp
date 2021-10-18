/* 
 * File:   copyc.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 14 January, 2013, 9:36 AM
 */
#include <cstdlib>
#include<iostream>
#include<string.h>

using namespace std;

/*
 *
 */
class sample
{
    int a,b;
public:
    sample();     //Constructor
    sample(sample &p);  //Copy constructor
    void display();
};
sample::sample()
{
    a=10;
    b=20;
}
sample::sample(sample &p)
{
    a=p.a;
    b=p.b;
}
void sample::display()
{
cout<<"\n a: "<<a;
cout<<"\n b: "<<b;
}
int main()
{
    sample s1;
    s1.display();
    sample s2;
    s2.display();

    return 0;
}



