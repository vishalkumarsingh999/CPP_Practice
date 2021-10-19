#include<iostream>
using namespace std;
main()
{
    int n=10;
    int c=0,t=n;
    while(t)
    {
        t=t>>1;
        c++;
    }
    cout<<(1<<c);

}
