/* 
 * File:   exp_16-11.3.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 18 March, 2013, 10:36 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
void  divide(double x,double y)
{
    cout<<"\ninside   divide  function :";
    try
    {
        if(y==0)
        {
            throw y;
        }
        else
        {
            cout<<"\nDIVISION  :  "<< x/y;
        }
    }
    catch(double)
    {
        cout<<"\ncaught  double inside  function ";
        throw ;
    }
    cout<<"\nend  of  function";
 }

int main()
{
    cout<<"\n  inside  main ";
    try
    {
        divide(10.5,2.0);
        divide(20.0,0.0);
    }
    catch(double)
    {
        cout<<"\ncaught  double  inside  main";
    }
    cout<<"\nEND  OF  MAIN";
    return 0;
}

