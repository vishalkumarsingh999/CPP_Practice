#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    //<<<<<<<<<<<<<<<<<<<<<<<<<<<New idea>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    //find the element with odd occerences in array , given that only one
    //element have odd occerences
    //<<<<<Soluation>>>>>>
    //Using XOR like, a^a=0 and a^a^a=a and XOR is associative a^b^a^b=0

    int arr[]={1,2,3,4,4,2,2,2,2,2,3,3,3,3};
    int result=0;
    for(auto i:arr)
    {
        result^=i;
    }
    cout<<setw(10)<<setfill(' ')<<result;
}
