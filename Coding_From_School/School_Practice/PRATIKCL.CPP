#include<iostream.h>
#include<conio.h>

class Cities
{ private: char name[50];
	   int pin;
	   char state[50], country[50];

  public:  void readinf();
	   void dispinf();
};
void Cities :: readinf()
{
 cout<<"Enter the name of the city:";
 cin>>name;
 cout<<"Enter the city pin:";
 cin>>pin;
 cout<<"Enter the state:";
 cin>>state;
 cout<<"Enter the country name:";
 cin>>country;
};
void Cities :: dispinf()
{
 cout<<"The name of city is:"<<name;
 cout<<"The city pin is:"<<pin;
 cout<<"The name of state is:"<<state;
 cout<<"The name of countryis:"<<country;
};
void main()
{

