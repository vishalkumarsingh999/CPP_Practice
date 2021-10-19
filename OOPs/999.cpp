#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
int i,j,y,f=0;
char x[50];
cout<<"enter"<<endl;
cin.getline(x,50);
y=strlen(x);
for(i=1,j=y;i<y/2;i++,j--)
{
if(x[i]!=x[j])
    {f=1;}
}
if(f)
{
  cout<<" not pelidrome";
}
else
   {
    cout<<" pelimdrome";
   }
getch();
return 0;
}
