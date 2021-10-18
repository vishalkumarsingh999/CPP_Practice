#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void amount(float princ, int time = 2, float rate = 0.08);
void amount(float princ, int time, float rate)
{
 cout<<"\n Principal Amount : Rs. "<<princ;
 cout<<" \t Time : "<<time;
 cout<<"\t Rate: "<<rate;
 cout<<"\n Interest Amount:"<<(princ*rate*time)<<endl;
}
int main()
{
 system ("cls");
 cout<<"case 1";
    amount(2000);
 cout<<"case 2";
    amount(2500, 3);
 cout<<"case 3";
    amount(2300, 3, 0.11);
 cout<<"case 4";
    amount(2500,0.08);
     return 0;
}