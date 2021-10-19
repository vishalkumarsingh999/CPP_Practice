#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
main()
{
    //Approach 1 to solve using Partation of Quick Sort .
    cout<<"\nApproach 1:\n";
    vector<int> arr{1,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1};
    int l=0,r=arr.size()-1;
    while(l<r)
    {
        while(arr[l]!=1 && l<r)
            l++;
        while(arr[r]!=0 && l<r)
            r--;
        if(l<r)
        {
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
        }
    }
    for(int i:arr)
    {
        cout<<setw(2)<<i;
    }

    //Approach 2 to solve using Bucket Sort;
    cout<<"\n\n\nApproach 2:";
    vector<int> arr1{1,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1};
    int count_0=0;
    for(int i:arr1)
    {
        if(!i)
            count_0++;
    }
    for(int i=0;i<count_0;i++)
        arr1[i]=0;
    for(int i=count_0;i<arr.size();i++)
        arr1[i]=1;
    cout<<endl;
    for(int i:arr1)
        cout<<setw(2)<<i;
    cout<<"\n\n";
}
