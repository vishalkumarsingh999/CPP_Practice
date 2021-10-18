#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class A
{
private:int roll;
	char nam[50];
public:void readA();
       void dispA();
};
class B:public A
{
private:char snam[50],cla[10];
public:void readB();
       void dispB();
};
class C:public B
{
private:char fnam[50],mnam[50],sess[20];
public:void readC();
       void dispC();
}X;

void A::readA()
{
cout<<"\n Enter the roll no:-";
cin>>roll;
cout<<"\n Enter the name:-";
gets(nam);
}
void B :: readB()
{
readA();
cout<<"\n Enter the class:-";
cin>>cla;
cout<<"\n Enter the name of school:-";
gets(snam);
}
void C:: readC()
{
readB();
cout<<"\n Enter the father name:-";
gets(fnam);
cout<<"\n Enter the name of mother:-";
gets(mnam);
cout<<"\n Enter the session:-";
gets(sess);
}
void A::dispA()
{
cout<<"\n Roll no:-"<<roll;
cout<<"\n Name:-"<<nam;
}
void B:: dispB()
{
dispA();
cout<<"\n Class:-"<<cla;
cout<<"\n School name:-"<<snam;
}

void C:: dispC()
{
dispB();
cout<<"\n Father name :-"<<fnam;
cout<<"\n Mother name:-"<<mnam;
cout<<"\n Session:-"<<sess;
}

void main()
{
clrscr();
X.readC();
X.dispC();
getch();
}