/* 
 * File:   exp_9_3.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 28 February, 2013, 9:58 AM
 */

//Program 3:rogram for swapping private data of classes using friend function.
/*
 * File:   main.cpp
 * Author: student
 *
 * Created on 28 February, 2013, 9:41 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
/*
 *
 */
class LMN;

class PQR
{
    int value_1;
public:
    int getdata(int a)
    {
        value_1=a;
    }
    void display(void)
    {
        cout<<value_1<<"\n";

    }
    friend void exchange(PQR &,LMN &);
};

class LMN
{
    int value_2;
public:
    int getdata(int a)
    {
        value_2=a;
    }
    void display(void)
    {
        cout<<value_2<<"\n";
    }
    friend void exchange(PQR &,LMN &);
};
void exchange(PQR &x,LMN &y)
{
    int temp=x.value_1;
    x.value_1=y.value_2;
    y.value_2=temp;

}

int main()
{
    PQR p;
    LMN L;

    p.getdata(135);
    L.getdata(531);
    cout<<"Values before exchange : "<<"\n";
    p.display();
    L.display();
    exchange(p,L);
    cout<<"Values after exchange: "<<"\n";
    p.display();
    L.display();

    return 0;
}

