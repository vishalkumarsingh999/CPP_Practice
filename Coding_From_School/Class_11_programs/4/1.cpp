//author: Vishal Kumar Singh


#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
class fibo
{
    int a,b,c,i;
    public:
        fibo();
};
int main()
{
    
    fibo abc;
    return 0;
}
fibo::fibo()
{
    a=0;
    b=1;
    i=0;

    cout<<" fibonacci  series  ";
    cout<<"\n\tno=  0";
    cout<<"\n\tno=  1";
    while(i<=9)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        cout<<"\n\tno=  "<<c;
    }


    
}



