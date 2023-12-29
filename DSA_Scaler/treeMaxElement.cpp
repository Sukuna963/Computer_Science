/***************************************************************
* Data Structures in C++ - Tree
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
};

node* newNode(int data)
{
    node* Node = new node();
    Node -> data = data;
    Node -> left = NULL;
    Node -> right = NULL;
    
    return(Node);
}

int findMax(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    
    int res = root -> data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    
    if(lres > res)
    {
        res = lres;
    }
    
    if(rres > res)
    {
        res = rres;
    }
    
    return res;
}

int main()
{
    node *root = newNode(1);
    root -> left = newNode(20);
    root -> right = newNode(3);
    root -> left -> left = newNode(74);
    root -> left -> right = newNode(5);
    root -> right -> right = newNode(66);
    root -> right -> left = newNode(87);
    root -> right -> left -> right = newNode(8);
    
    int max = findMax(root);
    
    cout << "Maximum element is " << max;
    
    return 0;
}