#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
    vector<int> a{1,2,3,4,5,6,7,8,9};
    auto n=a.size();
    auto d=3;
    //Approach 1: using O(d) extra space
    vector<int> aux;
    for(auto i=0;i<d;i++)
        aux.push_back(a[i]);
    for(auto i=d;i<a.size();i++)
        a[i-d]=a[i];
    int j;
    for(int i=a.size()-d , j=0 ;i<a.size(); i++,j++)
        a[i]=aux[j];
    for(auto i:a)
    {
        cout<<i<<" ";
    }

    //Aproach 2: using reverse method three times at O(n) as time complexities and O(1) as space

    vector<int> arr{1,2,3,4,5,6,7,8,9};
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
    cout<<endl<<endl;
    for(auto i:arr)
        cout<<i<<" ";
}
