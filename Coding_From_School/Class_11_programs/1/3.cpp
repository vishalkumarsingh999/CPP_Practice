/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 3 January, 2013, 10:52 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int main()
{
    int i,n,sum;
    sum=0;
    cout<<"enter  the   value  of  n = ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;

    }
    cout<<"addition  of  the  n  no"<<sum;

    return 0;
}

