#include<iostream>
#include<iomanip>
#include<vector>
#include<time.h>
#include<algorithm>
using namespace std;
main()
{
    int sum=14;
    int range=30;
    int n=20;
    vector<int> arr;
    srand(time(0));
    for(int i=0;i<n;i++)
        arr.push_back(rand()%range);
    sort(arr.begin(),arr.end());
    for(int i:arr)
        cout<<i<<" ";
    cout<<endl;

    int l,r;
    for(auto i=0;i<arr.size();i++)
    {
        int a=sum-arr[i];
        l=i+1;
        r=arr.size()-1;
        while(l<r)
        {
            if(arr[l]+arr[r]==a)
             {
                cout<<endl<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
                l++;
                r--;
             }
            if(arr[l]+arr[r]<a)
                l++;
            if(arr[l]+arr[r]>a)
                r--;
        }
    }


}
