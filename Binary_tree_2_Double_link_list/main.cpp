#include <iostream>
#include<vector>
using namespace std;
//Conversion_of_Binary_Tree_to_Double_Link_List
#include<iostream>
#include<deque>
int c=0;
using namespace std;
struct node{
int data;
struct node *llink,*rlink;
};
node* create(int data){
    node *temp=new node;
    temp->data=data;
    temp->llink=temp->rlink=nullptr;
    return temp;
}

void insertnode(node* &root,int data)
{
    if(root == nullptr)
    {
        root= create(data);
        return ;
    }
    if(root->data > data)
    {
        insertnode(root->llink,data);
    }
    else
    {
        insertnode(root->rlink,data);
    }
}

void inorder(node* root)
{
    if(root != nullptr)
    {
        inorder(root->llink);
        c++;
        cout<<root->data<<" ";
        inorder(root->rlink);
        return;
    }
    return;
}
//BINARY TREE TO Double LINK LIST
node* BT_TO_DLL(node* root)
{
    if(root->llink)
    {
        node *l=BT_TO_DLL(root->llink);
        for(;l->rlink;l=l->rlink);
        root->llink=l;
        l->rlink=root;
    }
    if(root->rlink)
    {
        node* r=BT_TO_DLL(root->rlink);
        for(;r->llink;r=r->llink);
        root->rlink=r;
        r->llink=root;
    }
    return root;
}


int main()
{
    vector<int> arr{35,65,43,23,21,32,22,2,33,37,64,47,90,3};
    node *root=nullptr;
    for(auto i:arr)
    {
        insertnode(root,i);
    }
    vector<int> arr2{47,5,43,23,29,51,32,21,23,33,37,264,417,90,30};
    node *root3=nullptr;
    for(auto i:arr2)
    {
        insertnode(root3,i);
    }
    cout<<endl<<endl<<endl;

    //Conversion_of_Binary_Tree_to_Double_Link_List for root 1
    cout<<endl<<endl<<"Conversion_of_Binary_Tree_to_Double_Link_List for root"<<endl;
    node *temp1=BT_TO_DLL(root);
    for(;temp1->llink;temp1=temp1->llink);
    while(temp1)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->rlink;
    }
    cout<<endl<<endl<<"Conversion_of_Binary_Tree_to_Double_Link_List for root3"<<endl;
    node* temp2=BT_TO_DLL(root3);
    for(;temp2->llink;temp2=temp2->llink);
    while(temp2)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->rlink;
    }

    cout<<endl<<endl<<endl;
    system("pause");


    return 0;
}
