#include<iostream.h>
#include<conio.h>
void main()
{
int list[30];
int i,j,k,n,temp;
cout<<"Enter the size of the list:";
cin>>n;
cout<<"Enter the list:";
for(i=0;i,n;i++)
cin>>list[i];
for(i=1;i<n;i++)
{
  temp=list[i];
  j=j-1;
  }
list[j+1]=temp;
}
cout<<"\n the Sorted List is...,:";
for(i=0;i<n;i++)
cout<<"\n"<<list[i];
}