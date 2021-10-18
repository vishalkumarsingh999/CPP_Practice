/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 3 January, 2013, 10:58 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int main()
{
    int a,b,c,i=0;
    a=0,b=1;
    cout<<" fibonacci  series  ";
    cout<<"\nno=0";
    cout<<"\nno=1";
    while(i<=9)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        cout<<" \n no=  "<<c;
    }


    return 0;
}

