/* 
 * File:   unary_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 4 February, 2013, 9:39 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
class unary
{
    int  p,q,r;
public:
    void getdata(int m,int n,int j);
    void display(void);
    void operator-();
};
void unary :: getdata(int m,int n, int j)
{
    p=m;
    q=n;
    r=j;


}
void unary :: display(void)
{
    cout<<" \n P : "<<p;
     cout<<" \n Q : "<<q;
      cout<<" \n R : "<<r;
}
void unary :: operator-()
{
    p=-p;
    q=-q;
    r=-r;

}
int main()
{
    unary u;
    u.getdata(3,-2,4);
    cout<<"\nbefore operation  :";
    u.display();
    -u;
    cout<<"\n after  operation  :";
    u.display();
    return 0;
}

