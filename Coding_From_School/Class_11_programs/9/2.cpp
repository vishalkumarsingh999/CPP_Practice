/* 
 * File:   exp_9_2.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 28 February, 2013, 9:36 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
class  MANALI;
class SAYLI
{
    int  x;
public:
    void  value(int i)
    {
        x=i;
    }
    friend  void  maximum(SAYLI ,MANALI);
};
class MANALI
{
    int a;
public:
    void  value(int i)
    {
        a=i;
    }
    friend  void  maximum(SAYLI ,MANALI);
};

void  maximum( SAYLI  m,MANALI n)
{
    if(m.x>=n.a)
    {
        cout<<"\n\n GREATER  VALUE  : "<<m.x<<"\n\n";
    }
    else
    {
        cout<<"GREATER  VALUE  :  "<<n.a<<"\n\n";
    }

}
int main()
{
    MANALI  MANALI;
    MANALI.value(54);
    SAYLI  SAYLI;
    SAYLI.value(72);
    maximum(SAYLI,MANALI);

    return 0;
}

