/* 
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 4 January, 2013, 9:15 AM
 */

#include <cstdlib>
#include<iostream>


using namespace std;

/*
 * 
 */
int main()
{
    int a[10],n,i,j,c;
    cout<<"enter  the  value  of  n = ";
    cin>>n;
    cout<<"\n\nenetr  the  array  element  =  ";
    for(i=0;i<=n-1;i++)
    {
        cout<<"\n no =  ";
        cin>>a[i];
    }
    for(j=n-1;j>=0;j--)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;

            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        cout<<"\n sorted  array =  "<<a[i];
    }


    return 0;
}

