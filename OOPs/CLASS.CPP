#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>

using namespace std;
void space(void)
{   for(int t=0;t<30;t++)
    cout<<" ";
 }
class stu
{
private: int a,b;
         char c[50];
public: void read(void);
        void disp(void);

}x;

 void stu::read(void)
{
     cout<<"enter your name . \n";
pro: cin.getline(c,50);

      int y=strlen(c);
      for(int s=0;s<y;s++)
     { int x=isdigit(c[s]);
      if(x==1)
      {cout<<"invalid input !!!!!! \n enter name again \n";
       goto pro;}
     c[s]=toupper(c[s]);
     }
     cout<<"\nroll no. \n";
     cin>>a;
     cout<<"\nenter your class . \n";
     cin>>b;
}
 void stu::disp(void)
{   space();
    cout<<"your name :\n";
    space();
    cout<<c<<"\n";
    space();
    cout<<"roll no : \n";
    space();
    cout<<a<<"\n";;
    space();
    cout<<"Your class : \n";
    space();
    cout<<b<<"\n";;
    space();

};

int main ()
{   x.read();
    for(int i=0;i<50;i++){cout<<endl;}
    x.disp();
    for(int i=0;i<18;i++){cout<<endl;}
    getch();
    return 0;
}
