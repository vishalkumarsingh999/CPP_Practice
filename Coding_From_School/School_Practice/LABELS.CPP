#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#define maxlabels 8
struct person
{
char title[3];
char firstname[15];
char lastname[15];
char address1[30];
char address2[25];
char city[25];
char state[25];
long pin;
};
int main()
{
person labels[2];
int lab_per_page;
for(int i=0;i<30;i++)
{
cout<<"\nenter information for person"<<i+1<<":"<<endl;
cout<<"title(mr/ms):";
cin>>labels[i].title;
cout<<"first name:";
cin>>labels [i].firstname;
cout<<"lastname:";
cin>>labels[i].lastname;
cout<<"house no,street:";
gets(labels [i].address1);
cout<<"area:";
gets(labels [i].address2);
cout<<"city:";
gets(labels[i].city);
cout<<"state:";
gets(labels [i].state);
cout<<"pin:";
cin>>labels[i].pin;
}
cout<<"enter how many labels you want to display per page";
cin>>lab_per_page;
if(lab_per_page>maxlabels)
lab_per_page=maxlabels;
int p=1,count=0;
char name[30],ctstate[50];
cout<<"\n\t\tpage"<<p<<endl;
cout.setf(ios::left);
for(i=0;i<30;)
{
strcpy(name,labels[i].firstname); strcat(name," ");
strcat(name,labels[i].lastname);
cout<<labels[i].title <<" "<<setw(30)<<name<<"\t";
strcpy(name,labels[i+1].firstname);strcat(name,"");
strcat(name,labels[i+1].lastname);
cout<<labels[i+1].title<<""<<name<<endl;
cout<<setw(30)<<labels[i].address1<<"\t"<<setw(30)
<<labels[i+1].address1<<endl;
cout<<setw(30)<<labels[i].address2<<"\t"<<setw(30)
  <<labels[i+1].address2<<endl;
  strcpy(ctstate,labels[i].city);
  strcat(ctstate,"(");
  strcat(ctstate,")");
cout<<setw(30)<<ctstate<<"\t"<<labels[i+1].city
  <<"("<<labels[i+1].state<<")"<<endl;
cout<<setw(30)<<labels[i].pin<<"\t"<<labels[i+1].pin<<endl;
cout<<endl;
i+=2;
count+=2;
if(count==8)
{p++;count=0;
cout<<"\n\t\tPAGE"<<p<<endl;
}
}return 0;
}