#include<iostream>
using namespace std;
main()
{
int a,b,c,x,y=0,z=1;
cout<<"please enter the no. of terms you want to be printed of fiboncci series "<<endl;
cin>>x;
cout<<"The "<<x<<" no. of fiboncci series are as : "<<endl;
for(a=0;a<x;a++)
{
    if(a<=1)
    {
        b=a;
    }
    else
    {
        b=y+z;
        y=z;
        z=b;

    }
    cout<<" "<<b<<" ";
}
}
