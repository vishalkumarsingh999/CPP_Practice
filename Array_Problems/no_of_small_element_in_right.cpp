#include<iostream>
#include<vector>
using namespace std;
struct node{
int d;
node *l,*r;
};
void insert_(node *i,int data)
{
    if(i==nullptr)
    {
        i=new node;
        i->d=data;
        return;
    }
    node* temp=i;
    if(temp->d > data)
        insert_(temp->r,data);
    else if(temp->d > data)
        insert_(temp->l,data);

}
main()
{
    vector<int> arrarr{8,2,8,3,8,3,5,2,3,1,7,0,0,7,0,1,1,6,7,4};

}
