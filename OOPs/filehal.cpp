
#include<iostream>
#include<fstream>

using namespace std;

main()
{char name[20];
int rno;
cout<<"Enter name \n";
cin.getline(name,20);
cout<<"\n Enter roll no. \n";
cin>>rno;

ofstream fout("vish1data.txt");
fout<<name<<endl;
fout<<rno;


}
