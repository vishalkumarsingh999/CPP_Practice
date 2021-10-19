#include<iostream>
#include<vector>
#include<set>
using namespace std;
main()
{
    set<int> s;
    vector<int> arr;
    srand(time(0));
    for(int i=0;i<40;i++)
    s.insert(rand()%32);
    for(auto i:s)
    {
        cout<<i<<" ";
        arr.push_back(i);
    }
    int l=0,r=arr.size()-1;
    while(l<r)
    {
        while(arr[l]%2==0 && l<r)
            l++;
        while(arr[r]%2==1 && l<r)
            r--;
        if(l<r)
        {
            int temp=arr[l];
            arr[l++]=arr[r];
            arr[r--]=temp;
        }
    }
    cout<<endl<<endl;
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}
