#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
class cls{
int a,b,c;
public:
    cls(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
public:
    friend ostream& operator << (ostream &out,cls o)
    {
        cout<<o.a<<" "<<o.b<<" "<<o.c;
        return out;
    }
    friend istream& operator >> (istream &in,cls &o)
    {
        in>>o.a>>o.b>>o.c;
        return in;
    }

};
main()
{
    string s="jdhgfkhjd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    cls obj(2,4,6);
    cin>>obj;
    cout<<obj;
}
