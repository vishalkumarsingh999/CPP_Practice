/*
Programer :	Ashish Ojha
Class:XI-C
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a,b,c,root1,root2,delta;
 cout<<"enter the value of a,b & c in quadritic equation ax^2+bx+c";
 cin>>a>>b>>c;
if(!a)
 cout<<"the value of\'a\'should not be zero aborting!!!!!!!!!!";
else
 {
  delta=b*b-4*a*c;
 if(delta>0)
  {
   cout<<"roots are real and unequal";
   root1=-b+sqrt(delta)/(2*a);
   root2=-b-sqrt(delta)/(2*a);
   cout<<"root1= "<<root1<<"root2= "<<root2;
  }
else
     if(delta==0)
       {
	cout<<"roots are real and equal";
	root1=-b/(2*a);
	cout<<"root1= "<<root1<<"root2 = "<<root1;
	}
       else
	cout<<"roots are imaaginery ";
getch();
 }
}

/*  Output
*******************************

enter the value of a,b & c in quadritic equation ax^2+bx+c2
1                                                                               
1                                                                               
roots are imaaginery                                                            
                                                                                
 */
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
