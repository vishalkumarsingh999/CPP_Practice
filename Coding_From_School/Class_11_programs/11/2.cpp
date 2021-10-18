/* 
 * File:   exp_16-11.2.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 18 March, 2013, 10:25 AM
 */


#include <cstdlib>
#include<iostream>

using namespace std;
/*
 *
 */


void test(int x)
{
    try
    {
        if(x==1)
        {
            throw x;
        }
        else
            if(x==0)
            {
                throw 'x';
            }
        else
            if(x==-1)
            {
                throw 1.0;
            }
            cout<<"\nend of try block \n";
    }
    catch(char c)
    {
        cout<<"\ncaught a character \n";
    }
    catch(int m)
    {
        cout<<"\ncaught an integer \n";
    }
    catch(double d)
    {
        cout<<"\ncaught a double \n";
    }


    cout<<"\nend of try-catch system \n";
}
int main()
{
    cout<<"\ntesting multiple catches \n";
    cout<<"x==1 \n";
    test(1);
    cout<<"x==0 \n";
    test(0);
    cout<<"x==-1 \n";
    test(-1);
    cout<<"x==2 \n";
    test(2);
    return 0;
}



