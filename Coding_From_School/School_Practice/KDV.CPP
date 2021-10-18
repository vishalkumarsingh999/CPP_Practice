#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int dow;
cout<<"Enter the number of weeks(1-7):";
cin>>dow;
switch(dow)
{
case 1:cout<<"\n"<<"Monday";
break;
case 2:cout<<"\n"<<"Tuesday";
break;
case 3:cout<<"\n"<<"Wednesday";
break;
case 4:cout<<"\n"<<"Thursday";
break;
case 5:cout<<"\n"<<"Friday";
break;
case 6:cout<<"\n"<<"Saturday";
break;
case 7:cout<<"\n"<<"Sunday";
break;
default:cout<<"\n"<<"WRONG NUMBER OF DAYS";
break;
}
getch();
}

