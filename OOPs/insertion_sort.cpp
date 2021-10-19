#include<iostream>
#include<chrono>
using namespace std::chrono;
main()
{
    int arr[] = {9,37,43,34,2389,3,4,34,3,99,433,423,125,656,6,7,67,6,3};
    std::cout<<"\n\nUnsorted Array: ";
    for(auto i:arr)
    std::cout<<i<<"   ";
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int j=1;j<n;j++)
    {
        int key=arr[j];
        int i=j-1;
        while( i>=0 && arr[i]>key)
          {
              arr[i+1]=arr[i];
              i=i-1;
          }
        arr[i+1]=key;
    }
    std::cout<<"\n\n  Sorted Array: ";
    for(auto i:arr)
    std::cout<<i<<"   ";
    auto time = high_resolution_clock::now();
    auto time2 = high_resolution_clock::now();
    auto du=duration_cast<microseconds>(time-time2);
    std::cout<<du.count();
}
