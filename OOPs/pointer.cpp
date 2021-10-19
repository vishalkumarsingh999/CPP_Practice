#include<iostream>
#include<conio.h>

using namespace std;

main()
{
    int *x,*y,*t;
    int i=5,j=10;
    cout<<"Before swapping I = "<<i<<" J = "<<j<<endl;
    x=&i;
    y=&j;
    *t=*x;
    *x=*y;
    *y=*t;
    cout<<"&i="<<&i<<"  ,  x="<<x;
    cout<<"\nAfter swapping I = "<<i<<" J = "<<j<<endl;
}
