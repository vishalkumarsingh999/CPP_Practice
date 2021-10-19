#include<iostream>
#include <algorithm>
#include<vector>
int main()
{
    int n,t,m=0;
    std::vector<int> arr;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>t;
        arr.push_back(t);
    }
    long count=0;
    for(auto i=0;i<arr.size();i++)
    {
            for (auto j=i+1; j<arr.size(); j++)
            {   m=*max_element(arr.begin()+i,arr.begin()+i+j);
                if((arr[i])*(arr[i+j]) <= m)
                {
                    std::cout<<"("<<i+1<<" "<<j+1<<")"<<std::endl;
                }
            }
    }
    std::cout<<count;
    return 0;
}
