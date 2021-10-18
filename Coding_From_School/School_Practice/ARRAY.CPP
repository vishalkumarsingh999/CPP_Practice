#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,a[100];
clrscr();
cout<<"Enter the size of array:-";
cin>>n;
cout<<"Enetr"<<n<<" array is:-";
for(i=0;i<n;i++)
cin>>a[i];
cout<< "\narray is:-";
for(i=0;i<n;i++)
cout<<a[i]<<' '<<endl;
getch();
}
