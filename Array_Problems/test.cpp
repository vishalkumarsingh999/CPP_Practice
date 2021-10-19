#include<iostream>
#include<vector>
using namespace std;
main()
{
    srand(time(0));
    int n=10;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        arr.push_back(rand()%64);
    }
    int curr_diff=arr[1]-arr[0];
    int max_diff =curr_diff;
    int mn=arr[0];
    for(auto i=0;i<arr.size();i++)
    {
        if(arr[i]<mn)
        {
            mn=arr[i];
        }
        else{
            curr_diff=arr[i]-mn;
            if(curr_diff>max_diff)
            {
                max_diff=curr_diff;
            }
        }
    }
    cout<<"\n\t"<<max_diff<<"\n\n";


}
