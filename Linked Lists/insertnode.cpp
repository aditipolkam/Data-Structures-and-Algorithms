//program to insert nodes in a linked list
#include<iostream>
using namespace std;

//create node structure
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

//function to append node to the list
void appendToList(node** headref, int newdata)             
{
    node *newnode = createNode(newdata);
    node *prev = *headref;                 

    while(prev->next != NULL)           //traverse till the last node 
        prev = prev->next;

    prev->next = newnode;               //assign newnode to next pointer
    return;
    
}

//function to insert in between of the list
void insertAtPosition(node** headref, int data, int pos){
    int i=0;
    node *newnode = createNode(newdata);
    node *prev = *headref;

    while(i<pos){
        prev = prev->next;
    }
    newnode->next = prev->next;
    prev->next = newnode;
}

//function to print list
void printlist(node *n){
    while(n != NULL){
        cout<<n->data<<"\t";
        n = n->next;
    }
}

int main(){
    int i,data;
    node *head = NULL;

    cout<<"Enter the first element of the list:"
    cin>>data;      
    *head = newnode;


    cout<<"Created linked list is:\n";
    printlist(head);

    cout<<"Enter the element to insert:"
    cin>>data;
        
}