/*
 * File:   main.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 3 January, 2013, 10:38 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
int main()
{
    int ch,a,b,r;
    char ans;
   // a=20;
   // b=10;
    back:
    cout<<"  \n1.addition  \n2.substraction  \n3.multiplication  \n4.division";
    cout<<"\nenter  ur  choice  =  ";
    cin>>ch;
    cin>>a>>b;
    switch(ch)
    {
        case 1:
                 r=a+b;
                 cout<<"\naddition ="<<r;
                 break;
        case 2:
                 r=a-b;
                 cout<<"\nsubstraction ="<<r;
                 break;
        case 3:
                 r=a*b;
                 cout<<"\nmultplication  ="<<r;
                 break;
        case 4:
                 r=a/b;
                 cout<<"\ndivision = "<<r;
                 break;
        default :
                  cout<<" WRONG   CHOICE ";
    }
    cout<<"\n\ndo u want  to  countinue  Y/N  =  ";
    cin>>ans;
    if(ans=='Y'||ans=='y')
    {
        goto back;
    }
    else
    {
        exit;
    }


    return 0;
}
