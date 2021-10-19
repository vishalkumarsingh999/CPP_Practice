#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
    vector<int> a{14,2,31,66,5,6,47,8,19,77};
    //Approach 1: using O(nlog(n)) complixities using sorting
    sort(a.begin(),a.end());
    for(auto i=0;i<a.size();i+=2)
    {
        swap(a[i],a[i+1]);
    }

    for(auto i:a)
    {
        cout<<i<<" ";
    }

    //Aproach 2: complixities O(n) by
    vector<int> arr{14,2,31,66,5,6,47,8,19,77};
    for(auto i=0;i<arr.size();i+=2)
    {
        if(i>0 && arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        if(i<arr.size()-1 && arr[i]>arr[i-1])
            swap(arr[i],arr[i-1]);
    }
    cout<<"\n\n";
    for(auto i:arr)
    {
        cout<<i<<" ";
    }

}
