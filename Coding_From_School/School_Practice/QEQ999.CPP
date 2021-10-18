#include<iostream.h>
int main()
{
int n,num,digid,rev=0;
cout<<"\ninput the number(max.32767):";
cin>>num;
n=num;
do
{
digit=n%10;
rev=(rev*10)+digit;
num=num/10;
while(num!=0);
{
cout<<"the reverse of the number is:"<<rev<<"\n;
if(n==rev)
cout<<"the number is palindrome";
else
cout<<"\n the number is not a palindrome";
return0;
}
