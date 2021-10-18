/* 
 * File:   exp12.1_16.cpp
 * Author: student
 *
 * Created on 21 March, 2013, 9:55 AM
 */


#include <cstdlib>
#include<iostream>
#include<string>
using namespace std;
/*
 *
 */
int main()
{
    string s1;
    string s2("ADCET ");
    string s3(" ASHTA");
    s1=s2;
    cout<<"\n\tS1 = "<<s1<<"\n";
    s1=" -: OBJECT  ORIENED  PROGRAMMING :- ";
    cout<<"\n\tNOW S1 = "<<s1<<"\n";
    string s4(s1);
    cout<<"\n\tS4 = "<<s4<<"\n";
    cout<<"\n\nenter the string :\n";
    cin>>s4;
    cout<<"\n\tNOW S4 = "<<s4;
    s1 = s2 + s3;
    cout<<"\n\tS1 finally contains : "<<s1<<"\n";
    return 0;
}


