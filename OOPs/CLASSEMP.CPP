#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>



using namespace std;
void space(void)
{   for(int t=0;t<30;t++)
 {
     cout<<" ";
 }

}
struct date
{int dd,mm,yy;};
class empolyee
{
private: int a;
         char c[50],b[30];
         date dob,jd,rd;
public: void read(void);
        void disp(void);

}x;

 void empolyee::read(void)
{
     cout<<"Enter employee name : ";
pro: cin.getline(c,50);
       int y=strlen(c);
      for(int s=0;s<y;s++)
       {int x=isdigit(c[s]);
         if(x)
          {cout<<"Invalid input !!!!!! \nEnter name again \n";
           goto pro;}
        c[s]=toupper(c[s]);
         }
     cout<<"\nEnter employee no. : ";
     cin>>a;
     cout<<"\nEnter employee post : ";
     cin>>b;
     cout<<"\nEnter date of birth (dd mm yyyy) : ";
     cin>>dob.dd>>dob.mm>>dob.yy;
     cout<<"\nEnter date of Joining (dd mm yyyy) : ";
     cin>>jd.dd>>jd.mm>>jd.yy;
}
 void empolyee::disp(void)
{   cout<<endl;
    space();
    cout<<"Employee name :\n";
    space();
    cout<<c<<"\n";
    space();
    cout<<"Employee no. : \n";
    space();
    cout<<a<<"\n";;
    space();
    cout<<"Employee post : \n";
    space();
    cout<<b<<"\n";;
    space();
    cout<<"Date of bith : \n";
    space();
    cout<<dob.dd<<"/"<<dob.mm<<"/"<<dob.yy<<"\n";;
    space();
    cout<<"Joining date : \n";
    space();
    cout<<jd.dd<<"/"<<jd.mm<<"/"<<jd.yy<<"\n";
    space();

};

int main ()
{   x.read();
    for(int i=0;i<3;i++){cout<<endl;}
    cout<<"                      THE INFORMATION OF EMPLOYEE AS BELOW ";
    x.disp();
    getch();
    return 0;
}
