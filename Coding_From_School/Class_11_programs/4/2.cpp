/* 
 * File:   implicit.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 14 January, 2013, 9:34 AM
 */
//Program 2: Program to implicit & explicit constructor call for displaying integer values using
             //parameterized constructor.

#include <cstdlib>
#include<iostream>
#include<string.h>

using namespace std;

/*
 *
 */
class sample
{
    char itemname[20];
    int cost;
public:
    sample(char *,int);  //Constructor declaration.
    void display();
};
sample::sample(char *s,int c)  //Constructor definition.
{
    strcpy(itemname,s);
    cost=c;

}
void sample::display()
{
    cout<<"Item: "<<itemname<<"\n";
    cout<<"Cost: "<<cost<<"\n";

}
int main()
{
    sample s1("Pencil",10);   //Implicit call to the constructor.
    sample s2=sample("Notebook",30); //Explicit call to the constructor.
    s1.display();
    s2.display();

    return 0;
}

