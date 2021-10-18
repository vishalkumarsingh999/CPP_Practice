/* 
 * File:   exp10.1_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 7 March, 2013, 9:37 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
template<class T>

void  swaping(T  &x,T &y)
{
    T temp =x;
    x=y;
    y=temp;

}
void  fun(int  m,int n,float a,float b)
{
    cout<<"the  value  of m  &  n  before swaping :";
    cout<<"\n\t m :=  "<<m;
    cout<<"\n\t n :=  "<<n;
    swaping(m,n);
    cout<<"\nthe  value  of m  &  n after swaping :";
    cout<<"\n\t m :=  "<<m;
    cout<<"\n\t n :=  "<<n;


    cout<<"\n\nthe  value  of a  &  b  before swaping :";
    cout<<"\n\t a :=  "<<a;
    cout<<"\n\t b :=  "<<b;
    swaping(a,b);
    cout<<"\nthe  value  of a  &  b  after swaping :";
    cout<<"\n\t a :=  "<<a;
    cout<<"\n\t b :=  "<<b;
}
int main(int argc, char** argv)
{
    fun(300,20,3.5,6.5);
    return 0;
}

