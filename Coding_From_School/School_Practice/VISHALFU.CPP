#include<iostream.h>
#include<conio.h>
int cube(int);
int main()
{int x,y;
cout<<" enter a no. to get it's cube\n";
cin>>x;
y=cube(x) ;
cout<<" \n cube of "<<x<<" is " <<y;
getch();
return 0;

}
int cube(int a)
{  return (a*a*a)  ;
}
