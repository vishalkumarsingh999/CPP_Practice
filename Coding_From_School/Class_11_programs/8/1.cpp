/* 
 * File:   this_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 21 February, 2013, 10:45 AM
 */

#include <cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

/*
 * 
 */
class Human
{
    char name[20];
    float age;

public:
    Human *z;
    Human(char *h,float y)
    {
        strcpy(name , h);
        age=y;
    }
    Human greater(Human &z)
    {
        if(z.age>=age)
        {
            return z;
        }
        else
        {
            return  this;
        }
    }
    void  display()
    {
        cout<<"\n\t  -:DATA:-";
        cout<<"\n\t  NAME :- "<<name;
        cout<<"\n\t  AGE  :- "<<age;
    }

};
int main()
{
    Human  h1("KEDAR",12),h2("TRUPTI",16),h3("SAMARTH",9);
    Human h=h1.greater(h3);
    cout<<"\n\tELDER  CHILD  IN  FAMILY  IS  :- ";
    h.display();
    h=h1.greater(h2);
    cout<<"\n\tELDER  CHILD  IN  FAMILY  IS  :- ";
    h.display();

    return 0;
}

