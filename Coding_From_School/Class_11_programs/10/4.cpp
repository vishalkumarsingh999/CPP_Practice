/* 
 * File:   main.cpp
 * Author: student
 *
 * Crea/*
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 7 March, 2013, 10:58 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
template<class T1,class T2>
class test
{
    T1 a;
    T2 b;
public:
    test (T1 x, T2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<"\n"<<b<<"\n";
    }
};
int main()
{
    test <float,int>test1(10.20,100);
    test <int,char>test2 (200,'s');
    test1.show();
    test2.show();
    return 0;
}


