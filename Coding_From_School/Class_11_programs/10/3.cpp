/* 
 * File:   exp10.3_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 7 March, 2013, 10:21 AM
 */


#include<iostream>
#include <cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

template <class T>
void roots(T a, T b, T c)
{
    T d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"\n\t ROTS  ARE  EQUAL  i.e R1=R2"<<-b/(2*a)<<endl;
    }
    else if(d>0)
    {
        cout<<"\n\tROOTS  ARE  REAL \n";
        float r=sqrt(d);
        float R1 =(-b+r)/(2*a);
        float R2 =(-b-r)/(2*a);
        cout<<"\n\tR1  :=  "<<R1;
        cout<<"\n\tR2  :=   "<<R2;
    }
    else
    {
        cout<<"\n\t  ROOTS  ARE  COMPLEX : \n";
        float R1=-b/(2*a);
        float R2=sqrt(-d)/(2*a);
        cout<<"\n\treal part :=  "<<R1;
        cout<<"\n\timaginary part=  "<<R2<<"\n";
        cout<< endl;
    }
}
int main()
{
    cout<<"\n\t\t  -:  integer coefficients   :- \n";
    roots(2,7,6);
    cout<<"\n\n\t\t  -:  float coefficients  :-\n";
    roots(2.3,3.6, 7.3);
     return 0;
}



