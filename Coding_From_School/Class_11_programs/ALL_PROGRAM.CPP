#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
char choice;
clrscr();
pro : clrscr() ;
cout<<"            Welcome in C++ programs        \n\n\n"<<endl;
cout<<"       Enter your choice to use that program no.    \n\n";
cout<<"1. Swaping the value of two number a & b \n";
cout<<"2. A programme to check is a number is multiple of any no. or not "<<endl;
cout<<"3. Program to calculat the value a^b "<<endl;
cout<<"4. Programe to calculate roots and it nature of quadratic equation "<<endl;
cout<<"5. Scientific calculator"<<endl;
cout<<"6. Programe to Find Factorial of no."<<endl;
cout<<"7. Program to generate 1000 random no 1-100."<<endl;
cout<<"8. "<<endl;
cout<<"0. >>>>  Next page  >>> \n";
cout<<"Enter your choice : ";
choice=getche();
switch(choice)
{ case '0':goto pro2;
  case '1':{ clrscr();
	  int a,b,c;
	  cout<<"Enter the value of a & b "<<endl;
	  cout<<"a = ";
	  cin>>a;
	  cout<<"b = ";
	  cin>>b;
	  c=a;
	  a=b;
	  b=c;
	  cout<<"Value of a & b after swaping as : \n";
	  cout<<"a = "<<a<<endl;
	  cout<<"b = "<<b<<endl;    }
  break;
  case'2': { clrscr();
	     int x,y;
	     cout<<"enter the no that you want to test for that multiple"<<endl;
	     cin>>y;
	     cout <<" enter an integer : ";
	     cin>>x;
	     if (x % y)
	      {
		cout  << x<< " is multiple of "<<y<<" ." <<endl;
	       }
	     else
	     cout <<x<< " is multiple of "<<y<<"." <<endl;
	     getch();  }
  break;
  case'3': {  clrscr();
	      double long a,b,c=1,d;
	      cout<<"enter the value of a & b to get a^b \n";
	      cin>>a>>b;
		d=b;
	       while (b>0)
		{ c=c*a ;
		  b--     ;
		  }
	      cout<<"the value of "<<a<<"^"<<d<<" is "<<c;
	      getch();}
  break;
  case '4': {clrscr();
	     int a,b,c;
	     double root1,root2,d;
	     cout<<"Enter a,b,c"<<"\n";
	     cin>>a>>b>>c;
	     d=b*b-4*a*c;
	      if(d==0)
	     {
	      root1=root2=-b/(2*a);
	      cout<<"Roots are Equal and Real"<<"\n";
	      cout<<"Root 1="<<root1<<"\n";
	      cout<<"Root 2="<<root2<<"\n";
		  }
	     else if(d>0)
	      {
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		cout<<"Roots are Unequal and Real"<<"\n";
		cout<<"Root 1="<<root1<<"\n";
		cout<<"Root 2="<<root2<<"\n";
		  }
	      else if(d<0)
		{ cout<<"Roots are Imaginary"<<"\n";
		     }
		  getch();
		 }
  break;
  case '5': { clrscr();
	      char letter;
	      char letter1;
	      char letter2;
	      char letter3;
	      char letter4;
	      int a,b;
	      double a1,b1;
	      int result;
	      double result1;
	      cout<<"\n\n\n Scientific calculator \n\n\n";
	      do
	    {
	      cout<<"\t 1 : Arithmetic Operations \n";
	      cout<<"\t 2 : Trigonometric Functions \n";
	      cout<<"\t 3 : Logarithmic Functions \n";
	      cout<<"\t 4 : Power Functions \n";
	      cout<<"\t 5 : Exit... \n";
	      letter = getche();


	  switch(letter)

	   {
	     case '1':

		    {
			   cout<<"\n\n";
			   cout<<"\t1 : Addition \n";
			   cout<<"\t2 : Subtraction \n";
			   cout<<"\t3 : Multipilication \n";
			   cout<<"\t4 : Division \n\n";
			   letter1 = getche();
			   switch(letter1)
			    {
			     case '1':
			     {
			      cout<<"\n\nEnter first number...";
			      cin>>a;
			      cout<<"Enter an other number...";
			cin>>b;
			result=a+b;
			cout<<"\n\nResult = "<<result<<endl;
			getch();
			break;
			  }
		case '2':
		      {
		   cout<<"\n\nEnter first number...";
			      cin>>a;
			      cout<<"Enter an other number...";
			cin>>b;
		   result=a-b;
		   cout<<"\n\nResult = "<<result<<endl;
		   getch();
		    break;
			}

		case '3':
			 {
		   cout<<"\n\nEnter first number...";
			      cin>>a;
			      cout<<"Enter an other number...";
			cin>>b;
		   result=a*b;
		   cout<<"\n\nResult = "<<result<<endl;
		   getch();
		    break;
		   }

		case '4':
			  {
		      cout<<"\n\nEnter first number...";
			      cin>>a;
			      cout<<"Enter an other number...";
			cin>>b;
		      if(a!=0)
		       {
			result=a/b;
			  cout<<"\n\nResult = "<<result<<endl;
			  getch();
		       }
			     break;
			  }

			   }// end of inner switch
			    break;
			       }// end of case 1 arithmatic operation

		case '2':
		 {
	  cout<<"\n\n";
	  cout<<"\t1 : Sin function \n";
	  cout<<"\t2 : Cos function \n";
	  cout<<"\t3 : Tan function \n";
	   letter2=getche();
	   switch(letter2)
	    {
	      case '1':
		 {
		      cout<<"\n\n Enter a number...";
		      cin>>a1;

			result1=(sin(a1));
			cout<<"\n\nResult = "<<result1<<endl;
			getch();
			break;
			  }
		case '2':
		   {
		      cout<<"\n\n Enter a number...";
		       cin>>a1;
				 result1=(cos(a1));
		     cout<<"\n\nResult = "<<result1<<endl;
			getch();
			break;
			    }
		case '3':
		   {
		 cout<<"\n\n Enter a number...";
		 cin>>a1;
				 result1=(tan(a1));
		   cout<<"\n\nResult = "<<result1<<endl;
		   getch();
		      break;

		       }

			  }// inner switch
			   break;
			    }//inner case 2 trignomatic
		   case '3':
			  {
			    cout<<"\n\n";
			    cout<<"\t1 : Natural log\n";
			    cout<<"\t2 : log with base 10 \n";
			    letter3=getche();
			    switch(letter3)
			 {
			   case '1':
			     {
				  cout<<"\n\n Enter a number...";
				  cin>>a1;
				  result1=log(a1);
				  cout<<"\n\n Result = "<<result1<<endl;
				  getch();
				  break;
				   }
			   case '2':
				 {
				   cout<<"\n\n Enter a number...";
				   cin>>a1;
				   result1= log10(a1);
				   cout<<"\n\n Result = "<<result1<<endl;
				   getch();
				   break;
				   }
				      }// end of switch
				    break;
					}// end of case 3 logrithmic
			 case '4':
			     {
				 clrscr();
				 cout<<"1) Press 1 for Power \n";
				 cout<<"2) Press 2 for Square root \n";
				 cout<<"Enter your choice....";
				 letter4=getche();
				 switch(letter4)
				  {
				       case '1':
					 {
					     cout<<"\n\nEnter a number...";
					     cin>>a1;
					     cout<<"Enter power...";
					     cin>>b1;
					     result1=pow(a1,b1);
					     cout<<"\n\nResult = "<<result1<<endl;
					     getch();
					     break;
					       }
				       case '2':
					 {
					     cout<<"\n\nEnter a number...";
					     cin>>a;
					     result1=sqrt(a);
					     cout<<"\n\nResult = "<<result1<<endl;
					     getch();
					     break;

					     }

						}// end of switch
						  break;
						     }// end of case power function

						       }// outer switch
					}while(letter != '5');}


  break;
  case '6': {  clrscr();
	       int num,factorial=1;
	       cout<<" Enter Number To Find Its Factorial:  ";
	       cin>>num;
		 for(int a=1;a<=num;a++)
		      { factorial=factorial*a;}
			cout<<"Factorial of Given Number is ="<<factorial<<endl; }
 break;
 case '7': { clrscr();
             cout<<"1000 random no. are as ."<<endl; 
	     for(int i=1;i<=1000;i++)
		  {cout<<rand()%100+1<<endl;
		   } getch();
	      break;}
 
 default : cout<<"Wrong choice !!!!! \n Please try again. ";
}
 pro2 :
 clrscr();
 cout<<"      Enter your choice to run that program   \n"<<endl;
 cout<<"0. <<< Back page <<<"<<endl;
 cout<<"1.Programe to Check whether the given string is a Palindrome "<<endl;
 cout<<"2.Programe to add two matrixes"<<endl;
 cout<<"3."<<endl;
 cout<<"4."<<endl;
 cout<<"5."<<endl;
 cout<<"Enter your choice : ";
 choice=getche();
  switch(choice)
   {case '0':{if(choice=='0')
		{goto pro;}
	     break;}
    case '1': { clrscr();
		char string1[20];
		int i, length;
		int flag = 0;
		cout << "Enter a string: ";
		cin >> string1;
		length = strlen(string1);

		 for(i=0;i < length ;i++){
		      if(string1[i] != string1[length-i-1]){
			  flag = 1;
			  break;
			   }
			    }

		 if (flag) {
		    cout << string1 << " is not a palindrome" << endl;
			 }
		 else {
		     cout << string1 << " is a palindrome" << endl;
		       }
		     getch();
		     break;}
   case '2' : { clrscr();
	       int m, n, c, d, first[10][10], second[10][10], sum[10][10];

	      cout << "Enter the number of rows and columns of matrix ";
	      cin >> m >> n;
	      cout << "Enter the elements of first matrix\n";

	      for (  c = 0 ; c < m ; c++ )
	       {for ( d = 0 ; d < n ; d++ )
		  {  cin >> first[c][d];}}

	   cout << "Enter the elements of second matrix\n";

	      for ( c = 0 ; c < m ;c++ )
		{for ( d = 0 ; d < n ; d++ )
		  {cin >> second[c][d];}}

	      for ( c = 0 ; c < m ; c++ )
		{for ( d = 0 ; d < n ; d++ )
		  {sum[c][d] = first[c][d] + second[c][d];}}

	       cout << "Sum of entered matrices:-\n";

		for ( c = 0 ; c < m ; c++ )
		   {for ( d = 0 ; d < n ; d++ )
		     cout << sum[c][d] << "\t";
		     cout << endl;}
		      getch();}
   break;
   case '3': {  clrscr();
		int n, status = 1, num = 3, count, c;

		 cout << "Enter the number of prime numbers to print\n";
		 cin >> n;

	       if ( n >= 1 )
		   {
		    cout << "First " << n <<" prime numbers are :-" << endl;
		    cout << 2 << endl;
			 }

		    for ( count = 2 ; count <=n ; )
		       {
			for ( c = 2 ; c <= (int)sqrt(num) ; c++ )
			     {
			      if ( num%c == 0 )
				  {
				   status = 0;
				   break;
                                      }
                                         }
                              if ( status != 0 )
                               {
                                cout << num << endl;
                                count++;
                                  }
                              status = 1;
                              num++;
                             }    getch();
                                  break;}
   default :cout<<"please try again \n"<<endl;  }

 getch();
 return 0;
}

