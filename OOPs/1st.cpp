#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
pro :  int x,y=1,num;
       char rep;

       cout<<" \n enter a no. to calculate it's factorial \n";
       cin>>x;
       while(x>0)
       {
           y=x*y;
           --x;
       }
       cout<<" \n The factorial of number is "<<y<<" .";
       cout<<" \n \n if you want to run this programe again than enter y/n \n";
       cin>> rep;
       if(rep=='y'||rep=='Y'||rep=='1'||rep==' ')
       {
           goto pro;
       }
       getch();
       return 0;
}
