/*
This Program Find The Total number

*/
#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
main()
{
    vector<int> arr;
    int n=100;
    srand(0);
    for(int i=0;i<n;i++)
    {
        arr.push_back(rand()%999);
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    int c=0;
    for(int i=0;i<arr.size()-2;i++)
        for(int j=i+1;i<arr.size()-1;i++)
            for(int k=i+2;i<arr.size();i++)
                if(arr[i]+arr[j] > arr[k] && arr[i]+arr[k] > arr[j] && arr[k]+arr[j] > arr[i])
                    c++;
    cout<<"Maximum Number of Triangle Possible: "<<c<<endl<<endl;
}
