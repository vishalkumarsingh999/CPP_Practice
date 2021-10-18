#include<iostream.h>
#include<process.h>
void main()
{  int num,i;
   cout<<"\n enter the number:";
   cin>>num;
   for(i=2;i<=num/2 ; ++i)
       if(num % i==0)
      {
	 cout<<"\n not a prime number !!!";
	   exit(0) ;
     }
       cout <<"\n it is a prime number.";
}