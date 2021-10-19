#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,count=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            for(int k=1;k<n;k++)
        {
            if(i+j*k==n)
            {
                count++;
            }
        }
        }
    }
    cout<<count;
    return 0;
}
