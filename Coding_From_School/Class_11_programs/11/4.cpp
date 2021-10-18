/* 
 * File:   exp_16-11.4.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 18 March, 2013, 10:45 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */

void divide(int x,int y,int z)
{
    cout<<"\n we are inside the function \n";
    if((x-y)!=0)
    {
        int r=z/(x-y);
        cout<<"\nresult="<<r<<"\n";
    }
    else
    {
        throw(x-y);
    }
}
int  main()
{
    try
    {
        cout<<"\nwe are inside the try block \n";
        divide(20,30,30);
        divide(20,20,20);
    }
    catch (int i)
    {
        cout<<"\ncaught the exception \n";
    }
    return 0;
}



