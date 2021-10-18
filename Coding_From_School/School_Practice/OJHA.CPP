#include<iostream.h>
#include<conio.h>
void main()
{
int dow;
cout<<"enter number(from1to7)";
cin>>dow;
switch(dow)
{
case 1:cout<<"monday";
break;
case 2:cout<<"tuesday";
break;
case 3:cout<<"wednesday";
break;
case 4:cout<<"thursday";
break;
case 5:cout<<"friday";
break;
case 6:cout<<"saturday";
break;
case7:cout<<"sunday";
   break;
default:cout<<"please enterthe no. between 1 to7";
}
getch();
}