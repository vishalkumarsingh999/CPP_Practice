/* 
 * File:   swap_overload.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 17 January, 2013, 10:30 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
class swaping
{
    int a,b;
    float  x,y;
   public:
       void sample(int,int);
       void sample(double,double);
};
void swaping ::sample(int a,int b)
{
    int t;
    cout<<"swaping  of  integer  no  :";
    cout<<"\n\nno before swaping  :  \n a :"<<a<<"\nb : "<<b;
    t=a;
    a=b;
    b=t;
    cout<<"\n\nno after swaping  :  \n a :"<<a<<"\nb : "<<b;
}
void swaping ::sample(double p, double r)
{
    float q;
    cout<<"\n\nno before swaping  :  \n x :"<<p<<"\ny : "<<r;
    q=p;
    p=r;
    r=q;
    cout<<"\n\nno after swaping  :  \n x :"<<p<<"\ny : "<<r;
}

int main()
{
    swaping s1;
    s1.sample(2,3);
    s1.sample(5.5,6.5);
    return 0;
}


