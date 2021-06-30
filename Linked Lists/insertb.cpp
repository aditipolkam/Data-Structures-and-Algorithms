#include<iostream>
using namespace std;

class node                  
{
    public:
        int data;
        node *next;
};

//function to crete new node
node* createNode(int data){
    node *newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

//function to print list
void printlist(node *n){
    while(n != NULL){
        cout<<n->data<<"\t";
        n = n->next;
    }
}

void insertAtStart(node** headref,int data){
    node *newnode = createNode(data);
    if(*headref == NULL){
        *headref = newnode;
        return;
    }
    newnode->next = *headref;
    *headref = newnode;
}

int main(){
    node *head = NULL;

    return 0;
}

