#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
main()
{
    int n=5;
    vector<int> arr(n);
    iota(arr.begin(),arr.end(),1);

    //Approach 1: Using Division;
    int product=accumulate(arr.begin(),arr.end(),1,[](int i, int j)->int{return i*j;});
    for(auto i:arr)
        cout<<product/i<<" ";
    cout<<endl;
    //Approach 2: Using Left and Right Cummulitive product
    vector<int> l(arr.size());
    vector<int> r(arr.size());
    partial_sum(arr.begin(),arr.end(),l.begin(),[](int i,int j)->int{return i*j;});
    partial_sum(arr.rbegin(),arr.rend(),r.rbegin(),[](int i,int j)->int{return i*j;});
    cout<<r[1]<<" ";
    for(int i=1; i<arr.size()-1 ;i++)
    {
        cout<<l[i-1]*r[i+1]<<" ";
    }
    cout<<l[l.size()-2]<<endl;
}
