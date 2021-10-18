s#include <iostream.h>
intmain()
{ int dow ;
   cout<<" enter the number of week's day(1to7):";
   cin
>> dow ;
   switch(dow)
   {
    case1: cout<<"\n"<<"monday";
    break;
    case2: cout<<"\n"<<"tuesday";
    break;
     case3: cout<<"\n"<<"wedenesday";
    break;
    case4: cout<<"\n"<<"thursday";
    break;
     case5: cout<<"\n"<<"friday";
    break;
    case6: cout<<"\n"<<"saturday";
    break;
    case7: cout<<"\n"<<"sunday";
    break;
    default: cout<<"\n"<<"wrong number ofday";
    break;
}
 return 0 ;
}