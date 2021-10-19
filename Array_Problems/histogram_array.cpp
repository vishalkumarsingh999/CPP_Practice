#include<iostream>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;
main()
{
    srand(time(0));
    int n=300;
    vector<int> arr;
    map<int,int> hash1;

    for(int i=0;i<n;i++)
    {
        arr.push_back(rand()%20);
    }
    int max_count=0;
    for(int i:arr)
    {
        if(hash1.find(i)==hash1.end())
        {
            hash1.insert(make_pair(i,1));
        }
        {
            hash1[i]+=1;
        }
    }
    for(auto i:hash1)
    {
        cout<<endl<<i.first<<"\t"<<i.second;
        if(i.second>max_count){
            max_count=i.second;
        }
    }
    cout<<endl;
    vector<int> bitmap(hash1.size());
    for(int i=max_count;i>0;i--)
    {
        cout<<setw(2)<<i<<"|";
        for(auto j:hash1)
        {
            if(j.second == i)
            {
                bitmap[j.first]=1;
            }
            if(bitmap[j.first]==1)
                cout<<setw(3)<<"#";
            else{
                cout<<setw(3)<<" ";
            }
        }
        cout<<endl;
    }
    for(auto i:hash1)
        cout<<setw(3)<<"-";
    cout<<setw(3)<<"--"<<endl<<setw(3)<<" ";
    for(auto i:hash1)
    {
        cout<<setw(3)<<i.first;
    }
}
