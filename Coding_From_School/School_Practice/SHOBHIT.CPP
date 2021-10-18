#include<iostream.h>
#include<conio.h>
void main()
{
char string[80],c;
cout<<"enter string(max. 79 character) :";
cin.getline(string,80);
//loop to find the length of the string.
for(int len=0 ; string[len]!='/0'; len++);
int i,j,flag =1;
for(i=0,j=len-1;i<len/2;i++,j--);
{
if(string[i]!=string[j])
{
flag=0;
break;
}
}
if(flag !=0)
cout<<"it is a palindrome.\n";
else
cout<<"it is not a palindrome.\",

}