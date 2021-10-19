
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
vector<int> arr{1,0,2,0,1,0,3,1,0,2};
//Approach 1:
int ans=0;
for(int i=0;i<arr.size();i++)
{
    int lmax=*max_element(arr.begin(),arr.begin()+i+1);
    int rmax=*max_element(arr.begin()+i,arr.end());
    ans+=(abs(min(lmax,rmax)-arr[i]));
}
cout<<ans;
}
