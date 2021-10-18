/* 
 * File:   exp12.2_16.cpp
 * Author: student
 *
 * Created on 21 March, 2013, 10:10 AM
 */

#include <cstdlib>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1(" 891993 ");
    string s2(" ADCET ");
    cout<<"\nOriginal strings are:  \n";
    cout<<"\ns1:"<<s1;
    cout<<"\ns2:"<<s2;
    cout<<"place S2 inside s1 \n";
    s1.insert(4,s2);
    cout<<"\nmodified S1:"<<s1;
    cout<< "\nremove 5 characters from s1:\n\n";
    s1.erase(4,5);
     cout<<"\nNow S1:"<<s1;
      cout<<"\nreplace middle 3 characters in s2 with s1 \n\n";
      s2.replace(1,3,s1);
      cout<<"\nNow S2:"<<s2<<"\n";
     return 0;
}

    
