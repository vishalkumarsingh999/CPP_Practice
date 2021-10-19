#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

main()
{char name[20];
int rno;

ifstream fin("vish1data.txt");
fin.getline(name,20);
fin>>rno;

cout<<"\nName :-  ";
cout<<name;
cout<<"\nRoll no. :-  ";
cout<<rno;
getch();
}
