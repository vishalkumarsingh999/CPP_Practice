#include<iostream.h>
void main()
{
int list[30],small,pos,temp,i,n,j;
cout<<"enter the size of list:";
cin>>n;
cout<<"enter the list\n"
for(i=0;i<n;i++)
cin>>list[i];
for(i=0;i<n;i++)
{
small=list[i];
pos=i;
for(j=i+1;j<n;j++)
}
if(small>list[j])
{
small=list[j];
pos=j;
}
}
TEMP=list[i];
list[i]=list[pos];
list[pos]=TEMP;}
cout<<"\nThe sorted list is...\n";
for(i=0;i<n;i++)
cout<<list[i]<<" ";
}