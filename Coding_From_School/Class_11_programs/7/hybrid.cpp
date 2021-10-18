/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 12 February, 2013, 9:09 AM
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
class sport
{
protected:
    float score;
public:
    void getscore(float y)
    {
        score=y;
    }
    void putscore()
    {
        cout<<"The score is:"<<score<<"\n";
    }
};
void student::getno(int a)
{
    roll=a;
}
void student::put()
{
    cout<<"Roll no is"<<roll<<"\n";
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
    cout<<"The marks of subject 1 are:"<<sub1<<"\n";
    cout<<"The marks of subject 2 are:"<<sub2<<"\n";
}
class result:public test,public sport
{
    int total;
public:
    void display();
};
void result::display()
{
    total=sub1+sub2+score;
    put();
    putmarks();
    putscore();
    cout<<"The total marks are"<<total<<"\n";
}
/*
 *
 */
int main(int argc, char** argv) {
    result r;
    r.getno(25);
    r.getmarks(20,80);
    r.getscore(70);
    r.display();
    return 0;
}

