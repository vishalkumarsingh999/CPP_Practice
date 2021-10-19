#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;
main()
{
    int n=256.0;
    int t=n;
    int c=0,s=0;
    //Apporach 1
    cout<<endl<<"\tApproach 1\n\n";
    while(n)
    {
        s+=n%2;
        c++;
        n= n>>1;
    }
    if(c%2==1 && s==1)
        cout<<"It is power of 4\n";
    else
        cout<<"It is not a power of 4\n";

    //Approach 2
    cout<<endl<<"\n\n\n\tApproach 2\n\n";

    float b=floor(log(t)/log(4.0));
    if(pow(4,b)==t)
        cout<<"It is power of 4\n";
    else
        cout<<"It is not a power of 4\n";

    //Approach 3
    cout<<endl<<"\n\n\n\tApproach 3\n\n";


}
