#include<iostream.h>
#include<conio.h>
void main()
{clrscr()
int findpos(char s[],char c);
char string[80],ch;
int y =0;
cout<<"Enter main string:\n";
cin.getline(string,80);
cout<<"\nEnter character to be searched for:\n";
cin.get(ch);
y=findpos(string,ch);
if(y==-1)
    cout<<"\nSorry! character is not in the string\n";
}
int findpos(char s[],char c)
{int flag= -1;
for(int i=0;s[i]!='0';i++)
  {if(s[i]==c)
    {flag=0;
     cout<<"\n The character is in the string at position"
     <<i+1;
    }
  }
}
