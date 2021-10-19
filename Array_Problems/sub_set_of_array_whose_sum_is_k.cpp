#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
#include<ctime>
#include<numeric>
#include<map>
using namespace std;
main()
{
    //Question: Find the sub array with given sum X with given Unsorted Array.
    //Approach 1: Brut force
    auto sum=21;
    vector<int> arr{5,4,6,7,9,8,3,1,2};
    for(auto i=0;i<arr.size();i++)
    {
        for(auto j=i+1;j<arr.size();j++)
        {
            if(accumulate(arr.begin()+i,arr.begin()+j,0)==sum)
            {
                cout<<endl<<"arr["<<i<<"]= "<<arr[i]<<" to "<<"arr["<<j-1<<"]= "<<arr[j-1];
                break;
            }
        }
    }

    //Approach 2: left-right adjustment
    auto l=0;
    auto r=0;
    auto temp_sum=arr[l];
    for(int i=0;i<2*arr.size();i++)
    {
        if(temp_sum==sum)
        {
            cout<<endl<<"arr["<<l<<"]= "<<arr[l]<<" to "<<"arr["<<r<<"]= "<<arr[r];
            break;
        }
        if(l<arr.size() && r<arr.size())
        {
         if(temp_sum>sum)
            temp_sum-=arr[l++];
        if(temp_sum<sum )
        {
            temp_sum+=arr[++r];
        }
        }
    }

    //Approach 3: Using Hash Table
    //Since Approach 2 Does not works for negitive numbers.
    map<int,int> hash1;
    vector<int> a{8,5,-2,3,4,-5,7};
    int x=10;
    int t_sum=0;
    for(int i=0;i<a.size();i++)
    {
        map<int,int>::iterator it=hash1.find(t_sum-x);
        if(it!=hash1.end())
        {
            cout<<endl<<"arr["<<it->second<<"]= "<<a[it->second]<<" to "<<"arr["<<i<<"]= "<<a[i];
            break;
        }
        t_sum+=a[i];
        hash1.insert(make_pair(t_sum,i));
    }
    for(auto i:hash1)
    {
        cout<<endl<<i.first<<" "<<i.second;
    }


}
