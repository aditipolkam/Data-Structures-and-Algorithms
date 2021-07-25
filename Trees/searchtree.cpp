#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void insert(struct Node *root, int value)
{
    if(root == NULL)
        root = new Node(value);
    if(root->data>value){
        if(root->left == NULL){
            root->left = new Node(value);
            cout<<"inserted "<<value<<"\t";
            return;
        }
        insert(root->left,value);
    }
    else if(root->data < value){
        if(root->right == NULL){
            root->right == new Node(value);
            cout<<"inserted "<<value<<"\t";
            return;
        }
        insert(root->right,value);
    }

}
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
    struct Node* root = new Node(5);
    
    insert(root,4);
    insert(root,7);
    insert(root,8);
    insert(root,2);
    insert(root,6);
    insert(root,3);
    
    cout<<"Preorder:\t";
    preorder(root);
    cout<<"\nPostorder:\t";
    postorder(root);
    cout<<"\nInorder:\t";
    inorder(root);
    
    return 0;
}
