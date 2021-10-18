/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 18 March, 2013, 10:13 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int main()
{
    int  a,b;
    cout<<"ENTER  THE  VALUE  OF  A & B";
    cout<<"\na : ";
    cin>>a;
    cout<<"\nb : ";
    cin>>b;
    int  x = a-b;
    try
    {
        if(x != 0)
        {
            cout<<"\nRESULT :  "<<a/x;
        }
        else
        {
            throw(x);
        }
    }
    catch(int a)
    {
        cout<<"\nEXCEPTION   CAUGHT \n";
    }
    cout<<"\nEND  OF  PROGRAM \n";




    return 0;
}

