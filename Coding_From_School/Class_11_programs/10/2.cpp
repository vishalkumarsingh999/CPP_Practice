 /*
 * File:   epp10.2_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 7 March, 2013, 9:49 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
template<class t>
void bubble(t a[], int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=n-1; i<j; j--)
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
            }
}
template<class p>
void swap(p &a, p &b)
{
    p temp=a;
    a=b;
    b=temp;
}

int main()
{
    int p[5]={55,44,33,22,11};
    float q[5]={9.5,3.6,5.5,4.9,7.5};
    bubble(p,5);
    bubble(q,5);
    cout<<"     -:SORTING  OF  THE  ARRAY  USING  BUBBLE  SORT :-";
    cout<<"\nsorted p-array  :";
    for(int i=0; i<5; i++)
    {
        cout<<"\n\tp[i] : "<<p[i];
        cout<<endl;
    }
    cout<<"\nsorted q-array  :";
    for(int i=0; i<5; i++)
    {
        cout<<"\n\tq[i] :  " <<q[i];
        cout<<endl;
    }

    return 0;
}



