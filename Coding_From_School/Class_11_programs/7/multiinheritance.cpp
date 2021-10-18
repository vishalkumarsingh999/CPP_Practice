/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 9 February, 2013, 1:01 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    void getno(int);
    void put();
};
void student::getno(int a)
{
    roll=a;
}
void student::put()
{
    cout<<"Roll no is"<<roll;
}
class test:public student
{
protected:
    int sub1,sub2;
public:
    void getmarks(int,int);
    void putmarks();
};
void test::getmarks(int b,int c)
{
    sub1=b;
    sub2=c;
}
void test::putmarks()
{
    cout<<"The marks of subject 1 are:"<<sub1;
    cout<<"The marks of subject 2 are:"<<sub2;
}
class result:public test
{
    int total;
public:
    void display();
};
void result::display()
{
    total=sub1+sub2;
    void put();
    void putmarks();
    cout<<"The total marks are"<<total;
}
/*
 * 
 */
int main(int argc, char** argv) {
    result r;
    r.getno(25);
    r.getmarks(60,78);
    r.display();
    return 0;
}

