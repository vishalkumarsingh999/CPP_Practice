#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,num,fact=1;
cout<<"enter a no.";
cin>>num;
i=num;
while(num)
{
fact*=num;
--num;
}
cout<<"factoril value of"<<i<<" "<<fact;
getch();
}
