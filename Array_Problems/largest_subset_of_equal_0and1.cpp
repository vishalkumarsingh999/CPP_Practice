#include<iostream>
#include<vector>
#include<map>
#include<numeric>
#include<iomanip>
using namespace std;
main()
{
    vector<int> arr{0,1,1,1,0,1,1,0};
    vector<int> sum,x(arr.size());
    for(auto i:arr)
        sum.push_back((i==0)?-1:1);
    partial_sum(sum.begin(),sum.end(),x.begin());
    cout<<setw(8)<<"Arrary:";
    for(auto j:arr)
        cout<<setw(3)<<j;
    cout<<endl<<setw(8)<<"Index:";
    int c=0;
    for(auto j:arr)
        cout<<setw(3)<<c++;

    map<int,int> h;
    int start=-1,len=0;
    for(auto i=x.begin();i != x.end();i++)
    {
        if(*i==0)
        {
            start=0;
            len=i-x.begin()+1;
            continue;
        }
        if(h.find(*i)==h.end())
        {
            h.insert(make_pair(*i,i-x.begin()));
        }
        else
        {
            map<int,int>::iterator it = h.find(*i);
            if((i-x.begin())-it->second > len){
                len=(i-x.begin())-it->second;
                start=it->second+1;
            }
        }
    }
    cout<<"\n\nLength of Maximum Sub-Array of Continous 0s and 1s :"<<len;
    cout<<"\nStarting of Sub-Array at index :"<<start;
    cout<<"\nEnding of Sub-Array at index :"<<start+len-1;


    cout<<"\n\n\n";

}
