#include<iostream.h>
#include<conio.h>
float arith_op(float f_a,float f_b,char f_op)
{
 float z;
 switch(f_op)
 {
   case '+':z=f_a+f_b;
	    break;
   case '-':z=f_a-f_b;
	    break;
   case '/':z=f_a/f_b;
	    break;
   case '*':z=f_a*f_b;
	    break;
 }
 return z;
 }
void main()
{
 clrscr();
 float a,b,c;
 char op;
 for(;;)
 {
  cout<<"Arithmetic <<";
  cin>>a>>op>>b;
  cout<<"\n";
  cout<<"Arithmetic >>"<<arith_op(a,b,op)<<endl;
}
getch();
}