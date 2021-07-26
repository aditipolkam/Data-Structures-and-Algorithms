#include <iostream>

using namespace std;

class Node{
    int data;
    Node *left, *right;
    public:

        Node(){
            data = 0;
            left = right = NULL;
        }

        Node(int val){
            data = val;
            left = right = NULL;
        }

        Node* insert(Node* root, int value){
            if(root == NULL){
                return new Node(value);
            }
            if(value > root->data){
                root->right = insert(root->right,value);
            }
            else{
                root->left = insert(root->left,value);
            }
            return root;
        }

        void inorder(Node *node)
        {
            if(node == NULL)
                return;
            
            inorder(node->left);
            cout<<node->data<<"\t";
            inorder(node->right);
        }
};


int main()
{
    Node n, *root = NULL;
    root =  n.insert(root,5);
    
    n.insert(root,4);
    n.insert(root,7);
    n.insert(root,8);
    n.insert(root,2);
    n.insert(root,6);
    n.insert(root,3);

    cout<<"\nInorder:\t";
    n.inorder(root);
    
    return 0;
}
