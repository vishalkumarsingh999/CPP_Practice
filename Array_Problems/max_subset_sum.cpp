#include<iostream>
#include<vector>
using namespace std;
main(){
int arr[]={1,5,3,-785,1,34,57,73,-366,22,133,-43,23,24,5,67,-3,7,94,6,-87,6,5,87,-4,3,33};
//int arr[]={1,5,3,-785,1,34,57,73,-366,22,133,-43,23,24,5,67,-3,7,94,6,-87,6,5,87,-4,3,33};
int n=sizeof(arr)/sizeof(arr[0]);
int curr_max=arr[0];
vector<int> x;
for(int i=1;i<n;i++)
{
    if(arr[i-1]>0)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    curr_max=max(curr_max,arr[i]);
    if(curr_max==arr[i])
    {
        x.push_back(i);
    }
}
cout<<curr_max<<endl<<endl<<endl;
for(auto i:x)
{
    cout<<i<<"\t";
}
cout<<endl<<n<<endl;
for(auto i:x)
{
    cout<<arr[i]<<"\t";
}
}
