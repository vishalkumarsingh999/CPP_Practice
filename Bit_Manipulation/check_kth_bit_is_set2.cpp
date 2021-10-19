#include<iostream>
#include<iomanip>
#include<deque>
#include<algorithm>
#include<numeric>
using namespace std;
main()
{
    int a=1024+64;
    int k=7;
    int mask=1;
    mask=mask<<(k-1);
    cout<<endl<<k<<" bit is "<<((a&mask)?"set \n\n":"not set\n\n");
}
