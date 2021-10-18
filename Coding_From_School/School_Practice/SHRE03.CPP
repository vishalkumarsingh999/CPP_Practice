#include <iostream.h>
#include<conio.h>
int main()
{clrscr();
 int dow ;
   cout<<" enter the number of week's day(1to7):";
   cin>> dow ;
   switch(dow)
   {
    case 1: cout<<"\n"<<"monday";
    break;
    case 2: cout<<"\n"<<"tuesday";
    break;
     case 3: cout<<"\n"<<"wedenesday";
    break;
    case 4: cout<<"\n"<<"thursday";
    break;
     case 5: cout<<"\n"<<"friday";
    break;
    case 6: cout<<"\n"<<"saturday";
    break;
    case 7: cout<<"\n"<<"sunday";
    break;
    default: cout<<"\n"<<"wrong number ofday";
    break;
}getch();
 return 0 ;
}