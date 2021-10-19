#include <iostream>
#include<vector>
using namespace std;
//WHat is Diameter_of_BriaryTree
//Diameter_of_BriaryTree is maximum distance between any two node. root may not present in this diameter.
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
//Diameter_of_BriaryTree Approach 1
int hight(node* root)
{
    if(!root)
        return 0;
    return max(hight(root->llink),hight(root->rlink))+1;
}
int Diameter_of_BriaryTree(node* root)
{
    if(!root)
        return 0;
    int hl=hight(root->llink);
    int hr=hight(root->rlink);
    int lc=Diameter_of_BriaryTree(root->llink);
    int rc=Diameter_of_BriaryTree(root->rlink);
    return max(hl+hr+1,max(lc,lc));
}

//Diameter_of_BriaryTree Approach 2
int Diameter_of_BriaryTree_2(node* root,int *hight)
{
    int lh=0,rh=0,ld=0,rd=0;
    if(!root)
    {
        *hight=0;
        return 0;
    }
    ld=Diameter_of_BriaryTree_2(root->llink,&lh);
    rd=Diameter_of_BriaryTree_2(root->rlink,&rh);
    *hight=max(lh,rh)+1;
    return max(lh+rh+1,max(ld,rd));
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

    //Diameter_of_BriaryTree Approach 1  "O(N^2)"
    cout<<endl<<endl<<"Diameter_of_BriaryTree using Approach 1 on root : "<<Diameter_of_BriaryTree(root)<<"\n"<<endl;
    cout<<endl<<endl<<"Diameter_of_BriaryTree using Approach 1 on root3 : "<<Diameter_of_BriaryTree(root3)<<"\n"<<endl;

    int hight=0;
    //Diameter_of_BriaryTree Approach 2 "O(N)"
    cout<<endl<<endl<<"\n\nDiameter_of_BriaryTree using Approach 2 on root : "<<Diameter_of_BriaryTree_2(root,&hight)<<"\n"<<endl;
    cout<<endl<<endl<<"Diameter_of_BriaryTree using Approach 2 on root3 : "<<Diameter_of_BriaryTree_2(root3,&hight)<<"\n"<<endl;


    cout<<endl<<endl<<endl;
    //system("pause");


    return 0;
}
