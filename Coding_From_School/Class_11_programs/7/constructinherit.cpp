/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 12 Februarb, 2013, 9:28 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
class alpha
{
    int a;
public:
    alpha(int i)
    {
        a=i;
        cout<<"Alpha is initialised \n";
    }
    void showa()
    {
        cout<<a;
    }
};
class beta
{
    float b;
public:
    beta(float j)
    {
        b=j;
        cout<<"Beta is initialised \n";
    }
    void showb()
    {
        cout<<b;
    }
};
class gamma:public alpha,public beta
{
    int m,n;
public:
    gamma(int a,float b,int c,int d):alpha(a),beta(b)
    {
        m=c;
        n=d;
        cout<<"Gamma is initialised \n";
    }
    void showmn()
    {
        cout<<m;
        cout<<n;
    }
};
/*
 * 
 */
int main(int argc, char** argv) {
    gamma g(4,5.5,6,7);
    g.showa();
    g.showb();
    g.showmn();
    return 0;
}

