#include<iostream>
using namespace std;
main()
{
    int n=102;
    int x=n;
    int c=0;
    while(n)
    {
        if(n%2==1)
         c++;
        n=(n>>1);
    }
    ((c==1)?cout<<x<<" is power of two":cout<<x<<" is not power of two");
}
