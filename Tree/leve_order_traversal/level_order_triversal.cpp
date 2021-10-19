#include<iostream>
#include<vector>
#include<queue>
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

void level_order_triversal(node* root)
{
    if(root)
    {
        queue<node*> q;
        q.push(root);
        while(!q.empty())
        {
            auto temp=q.front();
            cout<<temp->data<<" ";
            q.pop();
            if(temp->llink)
                q.push(temp->llink);
            if(temp->rlink)
                q.push(temp->rlink);
        }

    }
}

main()
{
    vector<int> arr{35,65,43,23,21,32,21,2,33,37,64,47,90,3};
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
    level_order_triversal(root);
    cout<<endl;
    level_order_triversal(root3);

    cout<<endl<<endl<<endl;
}
