#include<iostream>
#include<math.h>
using namespace std;
main()
{
    //This approach has complixity of O(n2^n)
    char arr[]={'a','b','c','d','e','f','g','h','i','j'};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num=pow(2,n);
    cout<<"Power set of Given set is:\n";
    for(int i=0;i<num;i++)
    {
        cout<<"{";
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                cout<<arr[j]<<",";
            }
        }
        cout<<"}\n";
    }
}
