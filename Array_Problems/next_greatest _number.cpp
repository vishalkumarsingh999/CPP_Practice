#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
vector<int> arr{8,6,4,3,5,6,7};
for(auto i:arr)
{
    cout<<i<<" ";
}
cout<<endl;
int i;
for(i=arr.size()-1;i>0;i--)
{
    if(arr[i-1]<arr[i])
        break;
}
if(i==0)
{
    cout<<"\nNot Possible";
    exit(0);
}
int r=i;
auto m=arr[i];

for(int k=i;k<arr.size();k++)
{
    if(arr[k]<m)
    m=arr[k];
    if(arr[k]>arr[i-1] && arr[k]>=m )
        r=k;
}
swap(arr[r],arr[i-1]);
sort(arr.begin()+i,arr.end());
for(auto i:arr)
{
    cout<<i<<" ";
}
cout<<endl;
//using built-in function
cout<<"Same Using built-in Function\n";
arr.clear();
arr={8,6,4,3,5,6,7};
next_permutation(arr.begin(),arr.end());
for(auto i:arr)
{
    cout<<i<<" ";
}
}
