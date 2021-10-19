#include<iostream>
#include<conio.h>

using namespace std;


main()
{
 long int n;
 cout<<"Enter the value of n : ";
 cin>>n;
 long int y=0;
for (int i=0;i<=n;i++)
{
y+=i;
}

 cout<<"\n the sum of 1 to "<<n<<" is : "<<y;

}
