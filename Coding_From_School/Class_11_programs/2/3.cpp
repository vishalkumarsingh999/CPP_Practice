/* 
 * File:   inline.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 10 January, 2013, 9:08 AM
 */

#include <cstdlib>

#include<iostream>

inline int add(int,int);
 //Function prototyping
inline int sub(int,int);

inline int mul(int,int);

inline float div(float,float);


using namespace std;

/*
 *
 */

int main()

{

 float a,b;

 cout<<"Enter the value of a & b:";

 cin>>a>>b;


 float r;


 r=add(a,b);
 cout<<"Addition: "<<r;


 r=sub(a,b);

 cout<<"\nSubtraction: "<<r;


 r=mul(a,b);

 cout<<"\nMultiplication: "<<r;


 r=div(a,b);

 cout<<"\nDivision: "<<r;



 return 0;

}


//Function Definnition
inline int add(int a,int b)

{

float r;

 r=a+b;

 return(r);

}


inline int sub(int a,int b)

{

 float r;

 r=a-b;

 return(r);

}


inline int mul(int a,int b)

{

float r;

 r=a*b;

 return(r);

}


inline float div(float a,float b)

{

 float r;

 r=a/b;

 return(r);

}


