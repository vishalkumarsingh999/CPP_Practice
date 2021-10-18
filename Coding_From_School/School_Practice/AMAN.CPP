#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long double long fact, n=1;
cout<<"Input a no.\n";
cin>>fact;
while(fact>=1)
{n=n*fact;
fact--;
}
cout<<n;
getch();
}