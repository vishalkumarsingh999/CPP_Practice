/* 
 * File:   complex.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 4 February, 2013, 10:50 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
class opera
{
    float m,n;
public:
    opera()
    {

    }
    opera(float r,float i)
    {
        m=r;
        n=i;
    }
    opera operator+(opera);
    void display();

};
opera opera :: operator+(opera p)
{
    opera t;
    t.m=m+p.m;
    t.n=n+p.n;
    return (t);
}
void opera ::display()
{
    cout<<m<<"+j"<<n<<"\n";
}

int main()
{
    opera c1,c2,c3;
    c1=opera(5.5,6.5);
    c2=opera(3.5,4.5);
    c3=c1+c2;
    cout<<"\n c1 =";
    c1.display();
    cout<<"\n c2 =";
    c2.display();
    cout<<"\n c3 =";
    c3.display();


    return 0;
}

