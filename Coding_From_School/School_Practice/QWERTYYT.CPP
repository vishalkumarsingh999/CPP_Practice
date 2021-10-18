#include<iostream.h>
#include<conio.h>
int main()
 {
     int n,num.digit,rev=0;
      cout<<"\n input the number(max.32767):";
     cin>>num;
    n=num;
   do
{
      digit = num% 10;
       rev=(rev*10)+ digit;
       num=num/10;
}     while(num!= 0);
   cout<<"the reverse of number is:"<< rev <<"\n";
   if(n== rev)
      cout<<"the number is palindrome";
else
     cout<<"\n the number is not palindrome";
