/* File:   main.cpp
 * Author: Vishal Kumar Singh
 * Created on 5 February, 2013, 3:08 PM
 */
 #include <cstdlib>
#include <iostream>
using namespace std;

class vector
{
    int x[6],k;
public:
    void getdata();
    void display();
    friend vector operator+(vector x,vector y);
};
void vector::getdata()
{
    cout<<"enter no";
    for(int k=0;k<6;k++)
    {
        cin>>x[k];
    }
}
void vector::display()
{
    for(int k=0;k<6;k++)
    {
        cout<<"\nno :"<<x[k]<<"\n";

    }
}
 vector operator+(vector p,vector q)
{
    vector s;

    for(int k=0;k<6;k++)
    {
        s.x[k]=p.x[k]+q.x[k];

    }
    return s;
}
int main()
{
    vector v1,v2,v3;
    v1.getdata();
    v1.display();
    v2.getdata();
    v2.display();
    v3=operator+(v1,v2);
    cout<<"addition  of matrices"; 
    v3.display();

  return 0;
}


