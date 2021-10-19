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
//approach 1
void low_common_ancestor(node *root,int a,int b)
{
    if(root)
    {
        if(root->data>a && root->data>b)
        {
            return low_common_ancestor(root->llink,a,b);
        }
        else if(root->data<a && root->data<b)
        {
            return low_common_ancestor(root->rlink,a,b);
        }
        else{
            cout<<root->data;
        }
    }
}
//approach 2
void low_common_ancestor2(node *root,int a,int b)
{
    vector<node*> arr1;
    vector<node*> arr2;
    node *temp1=root;
    node *temp2=root;

    while(temp1 || temp2)
    {

        if(temp1)
            {
                if(temp1->data > a )
                {
                    arr1.push_back(temp1);
                    temp1=temp1->llink;
                }
                else if(temp2->data < a)
                {
                    arr1.push_back(temp1);
                    temp1=temp1->rlink;
                }
                else{
                    arr1.push_back(temp1);
                    temp1=nullptr;
                }
            }
        if(temp2)
        {
            if(temp2->data > b)
            {
                arr2.push_back(temp2);
                temp2=temp2->llink;
            }
            else if(temp2->data < b)
            {
                arr2.push_back(temp2);
                temp2=temp2->rlink;
            }
            else{
                arr2.push_back(temp2);
                temp2=nullptr;
            }
        }

    }
    for(auto i:arr1)
        cout<<i->data<<" ";
    cout<<endl;
    for(auto i:arr2)
        cout<<i->data<<" ";
    vector<node*>::iterator i,j;
    for(i=arr1.begin(), j=arr2.begin() ; i!=arr1.end() && j!=arr2.end() ; i++,j++)
    {
        if( *i != *j )
        {
            if(*(--i) == *(--j))
            {
                cout<<endl<<"Lowest Common Ancestor :"<<(*i)->data<<endl;
            }
            break;
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

    low_common_ancestor2(root,37,47);

    cout<<endl<<endl<<endl;
    system("pause");
}
