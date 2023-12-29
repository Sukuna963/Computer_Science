/***************************************************************
* Data Structures in C++ - Tree
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

class node
{
    public:
        int key;
        node* left;
        node* right;
};

node* newNode(int key)
{
    node* Node = new node();
    Node -> key = key;
    Node -> left = NULL;
    Node -> right = NULL;
    
    return(Node);
}

int sumAllNodes(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    
    return(root->key + sumAllNodes(root->left) + sumAllNodes(root->right));
}

int main()
{
    node *root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);
    root -> right -> right = newNode(6);
    root -> right -> left = newNode(7);
    root -> right -> left -> right = newNode(8);
    
    int sum = sumAllNodes(root);
    
    cout << "Sum of all the elements is " << sum;
    
    return 0;
}