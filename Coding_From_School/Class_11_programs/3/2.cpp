/*
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 10 January, 2013, 11:16 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 *
 */
class Account
{

public:
    int accno;
    float balance;
    char name[10];
    char address[30];
    void getdata();
    void deposit(float);
    void withdraw(float);
    void display();

};
void Account::getdata()
{
    cout<<"Enter account number";
    cin>>accno;
    cout<<"Enter initial balance:";
    cin>>balance;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter address:";
    cin>>address;
}
void Account::display()
{
    cout<<"\nAccount number"<<accno;
    cout<<"\nCurrent balance:"<<balance;
    cout<<"\nName:"<<name;
    cout<<"\nAddress:"<<address<<"\n";
}
void Account::deposit(float amount)
{
        balance=balance+amount;
}
void Account::withdraw(float amount)
{
    balance=balance-amount;
}
int main(int argc, char** argv)
{
    Account a[5];

    for(int i=0;i<2;i++)
    {
        a[i].getdata();
    }

    int chs;
    do
    {
    cout<<"Please Enter your choice:";
    cout<<"1.Deposit"<<"\n";
    cout<<"2.Withdraw"<<"\n";
    cout<<"3.View Account"<<"\n";
    int ch,acc;
    float amt;
    cin>>ch;
    if(ch==1)
    {
         cout<<"\nEnter account number:";
         cin>>acc;
         cout<<"\n Enter amount to deposit:";
         cin>>amt;
         for(int i=0;i<2;i++)
         {
             if(acc==a[i].accno)
             {
                 a[i].deposit(amt);
             }
         }

    }
    else if(ch==2)
    {
          cout<<"\nEnter account number:";
          cin>>acc;
          cout<<"\n Enter amount to withdraw:";
          cin>>amt;
         for(int i=0;i<2;i++)
         {
             if(acc==a[i].accno)
             {
                 a[i].withdraw(amt);
             }
         }
    }
    else
    {
        cout<<"\nEnter account number:";
        cin>>acc;
        for(int i=0;i<2;i++)
         {
             if(acc==a[i].accno)
             {
                 a[i].display();
             }

        }
    }
    cout<<"Do you want to continue? 1 or 0 ";
    cin>>chs;
    }while(chs==1);
    return 0;
}