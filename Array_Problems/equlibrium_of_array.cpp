#include<iostream>
#include<iomanip>
#include<vector>
#include<time.h>
#include<algorithm>
#include<numeric>
using namespace std;
main()
{
    //Approach 1
    //by checking each element for equlibrium
    //O(n^2)
    vector<int> arr{8,2,8,3,8,3,5,2,3,1,7,0,0,7,0,1,1,6,7,4};
    vector<int> arr1(arr.begin(),arr.end());
    for(int i:arr1)
        cout<<i<<" ";
    for(auto i=0;i<arr.size();i++)
    {
        auto sum1=0,sum2=0;
        for(auto j=0;j<i;j++)
            sum1+=arr[j];
        for(auto j=i+1;j<arr.size();j++)
            sum2+=arr[j];
        if(sum1==sum2)
        {
            cout<<endl<<sum1<<" "<<sum2;
            cout<<endl<<"Got Equlibrium at index: "<<i<<"\n\n\n";
            goto x;
        }
    }

    x:  ;

    //Approach 2:
    //to find cummulative sum from left and right and comparing it
    //Complixity will be: O(n)
    for(int i:arr1)
        cout<<i<<" ";
    int r_sum = accumulate(arr1.begin(),arr1.end(),0);
    int l_sum=0;
    for(auto i=0;i<arr1.size();i++)
    {
        r_sum -= arr1[i];
        if(l_sum==r_sum)
            cout<<endl<<"Got Equlibrium at index: "<<i<<"\n\n";
        l_sum += arr1[i];
    }

}
