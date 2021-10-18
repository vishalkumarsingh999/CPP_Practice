#include<iostream.h>
#include<stdlib.h>
int main ()
{   int i,num,fact=1;
     cout<<"\n enter integer:";
     cin>>num;
     i= num ;
     while (num>0)
     {    fact*=num ;
		  --num;
     }
     cout <<"the factorial of"<<i
	  <<"is" <<fact<<"\n" ;
     return 0;
}
