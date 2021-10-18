#include<iostream.h>
void main()
{  int i=0,ua=0,uc=0,fail=0;
    while (i <= 5)
    {     switch (i++)
       {    case 1 :
		     break ;
	    case 2 : ++ua ;
		     break ;
	    case 3 :
		     break ;
	    case 4 : ++ua ;
		     break ;

	    case 5 : ++uc ;
		     break ;
	    default : ++fail ;
	       }
    }
   cout<< "ua="<<ua<<"\t"<<"ub="<<ua<<endl ;
   cout<< "uc="<<uc<<"\t"<<"fail="<< fail <<endl ;
}