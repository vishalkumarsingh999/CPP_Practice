#include<iostream>
#include<iomanip>
#include<deque>
#include<algorithm>
#include<numeric>
using namespace std;
main()
{
    int a=1024+64;
    int k=6;
    int mask=1;
    mask=mask<<(k-1);
    cout<<(a|mask);
    cout<<endl<<"="<<((a&mask)?"set":"not set");
}
