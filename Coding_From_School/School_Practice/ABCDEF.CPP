#include<iostream.h>
int main()
{
 int year;
  cout<<"enter the year(max4)\n";
  cin>>year;
  if(year %  100==0)
      {   if(year%400==0)
	      cout<<"leap year\n";
  }
	 else
	     if(year% 4==0)
		     cout<<"leap year\n";
	    else
       cout<<"not a leap year\n";
	return 0 ;
}