/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 9 February, 2013, 12:36 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
class multiply
{
public:
    int a,b,c;
    void getdata();
};
class inherit:public multiply
{
public:
    void display();
};
void multiply::getdata()
{
    cout<<"Enter any 2 nos.";
    cin>>a>>b;
}
void inherit::display()
{
    c=a*b;
    cout<<"The multiplication of given nos is:"<<c;
}
/*
 * 
 */
int main(int argc, char** argv) {
    inherit i;
    i.getdata();
    i.display();
    return 0;
}

