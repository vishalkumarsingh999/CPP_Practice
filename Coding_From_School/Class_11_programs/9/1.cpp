/* 
 * File:   exp_9_1.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 28 February, 2013, 9:17 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * 
 */
class  A
{
    int m;
    int n;
public:
    void value()
    {
        m=52;
        n=16;
    }
    void  display()
    {
        cout<<"\n\n  value  of  m : "<<m;
        cout<<"\n\n  value  of  n : "<<n;
    }
    friend  float  mean(A a);

};
float  mean( A a)
{
    return float( a.m + a.n)/2.0;
}
int main()
{
    A  obj;
    obj.value();
    obj.display();
    cout<<"\n\n\nMEAN  VALUE  : R : "<< mean(obj)<<" \n\n";

    return 0;
}

