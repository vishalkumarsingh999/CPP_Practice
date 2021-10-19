#include<iostream>
#include<vector>
#include<time.h>
#include<algorithm>
using namespace std;
main()
{
    int n=19;
    int range=20; // (+range,-range)
    srand(time(0));
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int a=(rand()%2)?1:-1;
        arr.push_back(a*rand()%range);
    }
    sort(arr.begin(),arr.end());
    for(int i:arr)
        cout<<i<<" ";
    int l=0,r=arr.size()-1;
    int i,j,m=99999;
    while(l<r)
    {
        int a=arr[l]+arr[r];
        if(a<0)
        {
            if(abs(a) < m)
            {
                i=l;
                j=r;
            }
            l++;
            continue;
        }
        else if(a>0)
        {
            if(abs(a) < m)
            {
                i=l;
                j=r;
            }
            r--;
            continue;
        }
        else
        {
            cout<<endl<<arr[l]<<" "<<arr[r];
            l++;
            r--;
        }

    }

    cout<<endl<<arr[i]<<"  "<<arr[j];

}

