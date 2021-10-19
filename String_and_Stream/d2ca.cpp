#include <cmath>
#include<cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include<map>
#include <set>
using namespace std;
int max_val(int a[],int n)
{
    int i,max=a[0];
    for( i=0;i<n;i++)
        if(max<a[i])
            max=a[i];
    return  i;
}
void onestepback(int arr[],int n,int index)
{
    for(int i=index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main() {
    int n,x=0,y=0,ans=0;
    cin>>n;
    int arr[n],arr2[n],arr3[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>arr2[i];
        x=arr[i];
        arr3[i]=arr[i]+arr2[i];

    }

    while(y<=x)
    {
        ans++;
        int index=max_val(arr3,n);
        x-=arr[index]; y+=arr[index]+arr2[index];
        onestepback(arr, n,     index);
        onestepback(arr2, n, index);
        onestepback(arr3, n, index);
        n--;


    }
    cout<<ans;
        return 0;
}
