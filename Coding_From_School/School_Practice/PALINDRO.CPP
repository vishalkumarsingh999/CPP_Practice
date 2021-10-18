#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char string[80],c;
cout<<"Enter string(max.79 characters):";
cin>>string;
//cin.getline(string,80);
for(int len=0;string[len]!='\0';len++);
int i,j,flag=1;
for(i=0,j=len-1;i<len/2;i++,j--)
{
if(string[i]!=string[j])
{
flag=0;
break;
}
}
if(flag!=0)
cout<<"It is a palindrome.";
else
cout<<"It is not a palindrome.";
return 0;
}