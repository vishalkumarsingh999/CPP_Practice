#include <iostream>
using namespace std;
main(){
    int n=100;
    char ch='*';
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<ch<<ch;
        }
        cout<<endl;
    }
}