#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
main()
{
    char vec[16][4]={'\0'};
    char a[]={'a','b','c','d'};
    for(int i=0;i<16;i++)
    {   for(int j=0;j<4;j++)
        if (i&(1<<j))
            vec[i][j]=a[j];
    }
    cout<<"{";
    for(int i=0;i<16;i++)
     {
         cout<<"{";
         for(int j=0;j<4;j++)
         {
             if(vec[i][j]!='\0')
                {
                    cout<<vec[i][j];
                }
         cout<<"}";}
     }
     cout<<"}";
}

