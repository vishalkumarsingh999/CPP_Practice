/* 
 * File:   equal.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 4 February, 2013, 9:52 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
class opover
{
    int  p,q;
public:
    void getdata(int m);
    void display1(void);
     //void display2(void);
    void operator=(int m);
};
void opover :: getdata(int m)
{
    p=m;
//    q=n;
  //  r=j;


}
void opover :: display1(void)
{
    cout<<"  "<<p;
     //cout<<" \n Q : "<<q;
      //cout<<" \n R : "<<r;
}

void opover:: operator=(int m)
{
    p=q;
   // q=-q;
   // r=-r;

}
int main()
{
    opover o1,o2;
    o1.getdata(3);
    cout<<"\n P  :";
    o1.display1();
    o2.getdata(6);
    cout<<"\n Q  :";
    o2.display1();

    o1=o2;
    cout<<"\n P  :";
    o1.display1();
    return 0;
}


