#include<iostream.h>
#include<stdio.h>
int main()
{
char str[80];
inti;count=0;
cout<<"\nenter any string(max.80 char):";
gets(str);
for(i=0;str[i]!='\0';i++)
if(str[i]=='')
count++;
cout<<"\nnumber of space in the