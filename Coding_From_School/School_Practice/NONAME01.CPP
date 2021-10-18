
class sample
{ private: int x, int y;
  public : void read_data();
	   void display_data();
	   ~sample()      k
	   {
	    cout<<"Destructing....";
	   }
};
void read_data()
{
 cin>>x>>y;
}
void display_data()
{
 cout<<"x = "<<x<<"   y = "<<y;
}
void main()
{
clrscr();
sample b;
b.read_data();
b.display_data();
getch();
}

