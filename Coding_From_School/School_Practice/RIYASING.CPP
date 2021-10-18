
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int dow;
 cout<<"enter the number of days of week";
 cin>>dow;
 switch(dow)
 {
 case1: cout<<"monday";
 break;
 case2:cout<<"tuesday";
 break;
 case3:cout<<"wednesday";
 break;
 case4:cout<<"thursday";
 break;
 case5:cout<<"friday";
 break;
 case6:cout<<"saturday";
 break;
 case7:cout<<"sunday";
 break;
 default:cout<<"wrong number of days";
 }
 }