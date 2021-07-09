#include <iostream>

using namespace std;

struct Node
{
    char data;
    struct Node *left, *right;
    
    Node(char val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node *node)
{
    if(node == NULL)
        return;
    
    cout<<node->data<<"\t";
    preorder(node->left);
    preorder(node->right);
}

void postorder(struct Node *node)
{
    if(node == NULL)
        return;
    
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<"\t";
}

void inorder(struct Node *node)
{
    if(node == NULL)
        return;
    
    inorder(node->left);
    cout<<node->data<<"\t";
    inorder(node->right);
}

int main()
{
    struct Node* root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');
    root->left->left = new Node('D');
    root->left->right = new Node('E');
    root->right->right = new Node('F');
    
    cout<<"Preorder:\t";
    preorder(root);
    cout<<"\nPostorder:\t";
    postorder(root);
    cout<<"\nInorder:\t";
    inorder(root);
    
    return 0;
}
