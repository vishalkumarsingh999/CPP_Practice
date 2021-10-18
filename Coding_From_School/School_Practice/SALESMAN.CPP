
#include<iostream.h>
int main()
{ int sales[5][12];
int i,j;
unsigned long total;
for(i=0;i<5;i++)
{
total=0;
cout<<"\nEnter Sales For Salesman"<<i+1<<"\n";
for(j=0;j<12;j++)
{
cout<<"Month"<<j+1<<"";
cin>>sales[i][j];
total+=sales[i][j];
}
cout<<"\n";
cout<<"Total Sales Of Salesman"<<i+1<<"=Rs."<<total<<"\n";
}
return 0;
}
































