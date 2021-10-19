#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
		int data;
		Node* left;
		Node* right;
	};

vector<int> inorder(Node* root)
{
    static vector<int> arr;
    if(root){
        inorder(root->left);
        arr.push_back(root->data);
        inorder(root->right);
    }
    return arr;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
