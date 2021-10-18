#include<iostream.h>
#include<conio.h>
void main()
{  int N[100];
int a;
cout<<"enter a no.of array less 100";
cin>>a;
for(int i=0; i<a; i++)
{ cin>>N[i];
cout<<"\n";
}
for(int j=0; j<a; j++)
{ cout<<N[j];
cout<<"\n";
}
getch();
}