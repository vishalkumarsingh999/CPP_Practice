#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int a;
    a=645645672;
    cout<<setbase(10)<<setw(10)<<a;
    auto count1=0;
    while(a)
    {
        count1+=(a%2);
        a=a>>1;
    }
    cout<<setw(10)<<count1;
}
