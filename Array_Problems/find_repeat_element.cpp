#include<iostream>
#include<vector>
#include<ctime>
#include<sstream>
#include<math.h>
using namespace std;
main()
{
    int n=10;
    vector<int> arr;
    string s("9 6 4 7 9 5 4 1 2 3 8");
    stringstream ss(s);
    int a;
    string t;
    while(getline(ss,t,' '))
    {
        stringstream sss(t);
        sss>>a;
        arr.push_back(a);
    }
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl<<endl;

    //Using Approach 1: using rang properties
    for(int i=0;i<arr.size();i++)
    {
        if(arr[abs(arr[i])]>0)
        {
            arr[abs(arr[i])]*=(-1);
        }
        else{
            cout<<endl<<-arr[i]<<" is repeating";
        }
    }



}
