#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
main()
{
    int n,sum;
    map<int,int> arr;
    cin>>n>>sum;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.insert(make_pair(x,x));
    }
    for(auto i:arr)
    {
        int a=sum-i.first;
        auto it=arr.find(a);
        if (it!=arr.end())
        {
            cout<<endl<<"found:"<<i.first<<":"<<it->second;
        }

    }


}
