#include <iostream.h>
#include<conio.h>
#include<math.h>
void main()
{ clrscr();
   float op1,op2,res;
  char ch();
  cout<<"enter two numbers:";
  cin>>op1>>op2;
  cout<<"\n"<<"enter an operator(+,-,*,/,%):";
  cin>>no;
  cout<<"\n";
  switch(ch)
  {
  case'+': res=op1,op2,res;
	    break;
      case'-': res=op1-op2;
	  break;
       case'*':res=op1*op2;
	   break;
	case '/':res=op1/op2;
	    break;
	 case'%':if(op2==0)
	 cout<<"divide by zero error!!!" ;
		 else
	   {int r,q;
	     q=op2/op1;
	     r=op2-(q*op1);
	     res = r;
		     }
	     break;
	    default:cout<<"\n"<<"wrong operator!!!";
	    }
	    cout<<"the calculated result is:"<<res<<"\n";
	    getch();
	    }