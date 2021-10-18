#include<iostream.h>
void main()
{
 char ch;
 cout<<"/n"<<"enter a character";
 cin>>ch;
 if(((ch>='a')&&(ch='z'))||((ch>='a')&&(ch<='z')))
 cout<<"you entered an alphabet";
 else
 if(ch>='0'&&ch<='9')
 cout<<"/n"<<"you entered a digit";
 else
 cout<<"/n"<<"you entered a character other than"
 <<"alphabets and digits";
 }
