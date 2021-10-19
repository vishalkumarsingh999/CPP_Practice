#include<iostream>
#include<vector>
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
    if(root->data>data)
    {
        insertnode(root->rlink,data);
    }
    else
    {
        insertnode(root->llink,data);
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

bool check(node* &root1,node* &root2)
{
    if(root1==nullptr && root2==nullptr )
    {
        return true;
    }
    if(root1->data==root2->data)
    {
        return true;
    }
    if(root1->data != root2->data)
        return false;

    return check(root1->llink,root2->llink) && check(root1->rlink,root2->rlink);
}

void mirror(node* &root)
{
    if(root)
    {
        node *temp=root->llink;
        root->llink=root->rlink;
        root->rlink=temp;
        mirror(root->llink);
        mirror(root->rlink);
    }
}

main()
{
    vector<int> arr{1,65,43,23,21,32,21,2,33,37,64,47,90,3};
    node *root=nullptr;
    for(auto i:arr)
    {
        insertnode(root,i);
    }

    node *root2=nullptr;
    for(auto i:arr)
    {
        insertnode(root2,i);
    }

    vector<int> arr2{17,65,43,23,29,51,32,21,23,33,37,264,417,90,30};
    node *root3=nullptr;
    for(auto i:arr2)
    {
        insertnode(root3,i);
    }


    //counting total no node.
    inorder(root3);
    cout<<endl<<"Total number of element in Vector is :"<<arr2.size()<<endl;
    cout<<endl<<"Total number of Node is :"<<c<<endl<<endl;

    //checking for two tree identical or not.
    cout<<endl<<"Is Binary Search Tree root and root2 equal :"<<check(root,root2);
    cout<<endl<<"Is Binary Search Tree root and root3 equal :"<<check(root,root3)<<endl<<endl;


    //mirroring the given binary tree : tree2
    cout<<endl<<"root2 before mirror is :"<<endl;
    inorder(root2);
    mirror(root2);
    c=0;
    cout<<endl<<"root2 after mirror is :"<<endl;
    inorder(root2);
    cout<<endl<<"Total number of in root2 is :"<<c<<endl<<endl;
    cout<<endl<<endl<<endl;





}
