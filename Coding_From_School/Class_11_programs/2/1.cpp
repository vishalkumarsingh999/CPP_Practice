/*
 * File:   metrixadd_16.cpp
 * Author: Vishal Kumar Singh
 *
 * Created on 7 February, 2013, 9:12 AM
 */



//Release 13.12  rev 9501 (2013/12/25 19:25:45)   gcc 4.7.1 Windows/unicode - 32 bit

/*
 *
 */


#include<iostream>
#include<cstdlib>
using namespace std;
class sum
//{Release 13.12  rev 9501 (2013/12/25 19:25:45)   gcc 4.7.1 Windows/unicode - 32 bit
int p[2][2];
int q[2][2];
float r[2][2];
float s[3][3];
public:
void getint(void);
void getfloat(void);
void diffsum(void);
void add(int p[2][2], int q[2][2]);
void add(float r[3][3], float s[3][3]);
void add(int p[3][3], float r[3][3]);

};

void sum :: getint()
{
  int i, j;
   cout << "Enter two 2- dimentional integer arrays\n";
   cout<<"Enter element for first integer array:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)//Release 13.12  rev 9501 (2013/12/25 19:25:45)   gcc 4.7.1 Windows/unicode - 32 bit
     {
       cout<<"\nEnter Element:";
       cin>>p[i][j];
     }
   }
    cout<<"Enter eRelease 13.12  rev 9501 (2013/12/25 19:25:45)   gcc 4.7.1 Windows/unicode - 32 bitlement for second integer array:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<"\nEnter Element:";
       cin>>q[i][j];
     }
   }
   add(p,q);
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
       cin>>r[i][j];
     }
   }
    cout<<"Enter element for second float array:\n";
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       cout<<"\nEnter Element:";
       cin>>s[i][j];
     }
   }
   add(r,s);
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
   {//Release 13.12  rev 9501 (2013/12/25 19:25:45)   gcc 4.7.1 Windows/unicode - 32 bit
     for(j=0;j<3;j++)
     {
       cout<<sum[i][j]<<"\t";
      }
      cout<<"\n";
   }

}

void sum :: add(float r[3][3],float s[3][3])
{
   float sum[3][3];
   int i,j;
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       sum[i][j]=r[i][j]+s[i][j];
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
       sum[i][j]=p[i][j]+q[i][j];
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
 add(p,r);//Release 13.12  rev 9501 (2013/12/25 19:25:45)   gcc 4.7.1 Windows/unicode - 32 bit
}
int  main()
{
 sum c1;

 c1.getint();
 c1.getfloat();
 c1.diffsum();
 return 0;

}
