#include<iostrea.h>
#include<stdio.h>
struct student
{int rollno;
char name[21]  ;
float marks[5];
char gread;
};
student learn;
int main()
{//read in student data
cout <<"\n"<<"enter roll no:";
cin>>learn.rollno;
cout<<"\n"<<"enter name:";
gets(learn.name);
cout<<"\n"<<enter matrk in