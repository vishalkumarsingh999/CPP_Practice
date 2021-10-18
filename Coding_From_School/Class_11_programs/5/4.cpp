/* 
 * File:   metrixadd_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 7 February, 2013, 9:12 AM
 */





/*
 * 
 */


#include<iostream>
#include<cstdlib>
using namespace std;
class sum
{
int a[3][3];
int b[3][3];
float c[3][3];
float d[3][3];
public:
void getint(void);
void getfloat(void);
void diffsum(void);
void add(int a[3][3], int b[3][3]);
void add(float c[3][3], float d[3][3]);
void add(int a[3][3], float c[3][3]);

};

void sum :: getint()
{
  int i, j;
   cout << "Enter two 2- dimentional integer arrays\n";
   cout<<"Enter element for first integer array:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<"\nEnter Element:";
       cin>>a[i][j];
     }
   }
    cout<<"Enter element for second integer array:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<"\nEnter Element:";
       cin>>b[i][j];
     }
   }
   add(a,b);
}

void sum :: getfloat()
{
   int i, j;
    cout << "Enter two 2- dimentional float arrays\n";
    cout<<"Enter element for first float array:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<"\nEnter Element:";
       cin>>c[i][j];
     }
   }
    cout<<"Enter element for second float array:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<"\nEnter Element:";
       cin>>d[i][j];
     }
   }
   add(c,d);
}
void sum :: add(int a[3][3],int b[3][3])
{
   int sum[3][3],i,j;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       sum[i][j]=a[i][j]+b[i][j];
     }
   }
   cout<<"\n Addition of two 2-dimentional interger arrays is:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<sum[i][j]<<"\t";
      }
      cout<<"\n";
   }

}

void sum :: add(float c[3][3],float d[3][3])
{
   float sum[3][3];
   int i,j;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       sum[i][j]=c[i][j]+d[i][j];
     }
   }
   cout<<"\n Addition of two 2-dimentional float arrays is:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<sum[i][j]<<"\t";
      }
      cout<<"\n";
   }

}

void sum :: add(int a[3][3],float c[3][3])
{
   float sum[3][3];
   int i,j;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       sum[i][j]=a[i][j]+c[i][j];
     }
   }
   cout<<"\n Addition of  2-dimentional integer and float arrays is:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<sum[i][j]<<"\t";
      }
      cout<<"\n";
   }

}
void sum :: diffsum()
{
 add(a,c);
}
int  main()
{
 sum c1;

 c1.getint();
 c1.getfloat();
 c1.diffsum();
 return 0;

}
