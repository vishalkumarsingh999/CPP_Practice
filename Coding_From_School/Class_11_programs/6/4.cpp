/* 
 * File:   operator_fibo.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 4 February, 2013, 10:23 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
class fibo
{
    int a,b,c,i;
public:
    void operator++();
};
void fibo ::operator ++()
{
     a=0;
    b=1;
    i=0;

    cout<<" fibonacci  series using operator overloading : ";
    cout<<"\n\tno=  0";
    cout<<"\n\tno=  1";
    while(i<=9)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        cout<<"\n\tno=  "<<c;
    }


}
int main()
{
    fibo f1;
    ++f1;
    return 0;
}

