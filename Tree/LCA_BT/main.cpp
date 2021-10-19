#include <iostream>
#include<vector>
using namespace std;
//lowest_common_ancstor_Binary_Tree
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
//Lowest Common Ancestor

bool find_path(node* root,vector<node*> &s,int data)
{
    if(!root)
        return false;
    s.push_back(root);
    if(root->data==data)
        return true;
    if(find_path(root->llink,s,data) || find_path(root->rlink,s,data))
        return true;
    s.pop_back();
    return false;
}


node* LCA_BT(node *root,int v1,int v2)
{
    vector<node*> s1,s2;
    if(find_path(root,s1,v1) && find_path(root,s2,v2))
    {
        for(int i=0;i<min(s1.size(),s2.size());i++)
        {
            if(s1[i]!=s2[i])
            {
                return s1[i-1];
            }
        }
    }
    return nullptr;
}

//Lowest Common Ancestor Approach 2 (Easy one)
node* LCA_BT_A2(node* root,int v1,int v2)
{
    if(!root)
        return root;
    if(root->data==v1||root->data==v2)
    {
        return root;
    }
    node *l=LCA_BT_A2(root->llink,v1,v2);
    node *r=LCA_BT_A2(root->rlink,v1,v2);
    if(l && r)
        return root;
    return l?l:r;
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

    //Lowest Common Ancestor Approach 1
    LCA_BT(root,3,33)?cout<<"LCA is :"<<LCA_BT(root,3,33)->data<<endl:cout<<"NoT Found!!!!!!!!!!!!!"<<endl;
    LCA_BT(root,3,33)?cout<<"LCA is :"<<LCA_BT(root,3,22)->data<<endl:cout<<"NoT Found!!!!!!!!!!!!!"<<endl;
    LCA_BT(root,3,33)?cout<<"LCA is :"<<LCA_BT(root,3,47)->data<<endl:cout<<"NoT Found!!!!!!!!!!!!!"<<endl;
    LCA_BT(root,3,33)?cout<<"LCA is :"<<LCA_BT(root,37,47)->data<<endl:cout<<"NoT Found!!!!!!!!!!!!!"<<endl;

    cout<<endl<<endl<<"Same Test Cases for Approach 2"<<endl;
    //Lowest Common Ancestor Approach 2
    LCA_BT_A2(root,3,33)?cout<<"LCA is :"<<LCA_BT_A2(root,3,33)->data<<endl:cout<<"NoT Found!!!!!!!!!!!!!"<<endl;
    LCA_BT_A2(root,3,33)?cout<<"LCA is :"<<LCA_BT_A2(root,3,22)->data<<endl:cout<<"NoT Found!!!!!!!!!!!!!"<<endl;
    LCA_BT_A2(root,3,33)?cout<<"LCA is :"<<LCA_BT_A2(root,3,47)->data<<endl:cout<<"NoT Found!!!!!!!!!!!!!"<<endl;
    LCA_BT_A2(root,3,33)?cout<<"LCA is :"<<LCA_BT_A2(root,37,47)->data<<endl:cout<<"NoT Found!!!!!!!!!!!!!"<<endl;


    cout<<endl<<endl<<endl;
    system("pause");


    return 0;
}
