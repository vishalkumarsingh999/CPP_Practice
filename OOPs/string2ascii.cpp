#include<iostream>
#include<string>
#include<cmath>
#include<stack>
using namespace std;

int convertToASCII(string letter)
{ int ans=0;
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i);
        cout << int(x) ;
        ans=ans*1000+int(x);
    }
    return ans;
}

int main()
{
    string plainText;
    cout << "Enter text to convert to ASCII: ";
    cin >> plainText;
    int rtnno=convertToASCII(plainText);
    cout<<"\n\nEnter the above ASCII code:"<<endl;
    int acsiicode;
    acsiicode=rtnno;
    cout<<acsiicode;
    int num;
    int len =ceil(log10(acsiicode));
    stack<int> stk;
    while(acsiicode)
    {
        stk.push(acsiicode%10);
        acsiicode=acsiicode/10;
    }
    while(!stk.empty())
    {
        num= num*10 + stk.top();

        stk.pop();
        if(num>=32 && num<=126)
        {
            cout<<char(num);
            num=0;
        }
    }
    return 0;
}
