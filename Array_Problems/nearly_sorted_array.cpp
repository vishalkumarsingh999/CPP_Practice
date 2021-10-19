#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
main()
{
    int n=20;
    vector<int> a;
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        a.push_back(rand()%n+1);
    }
    for(auto i:a)
        cout<<i<<" ";
    cout<<endl<<endl;
    int k,j;
    for(int i=1;i<a.size();i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]<k)
        {
            a[j+1]=a[j];
            j-=1;
        }
        a[j+1]=k;
    }

    cout<<endl<<endl;
    for(auto i:a)
        cout<<i<<" ";



}
