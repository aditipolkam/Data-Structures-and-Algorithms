#include<iostream>
using namespace std;

//create node structure
class node                  
{
    public:
        int data;
        node *next;
};

//function to add node to the list
void addToEnd(node** headref, int newdata)             
{
    node *newnode = new node();         //creation of newnode
    node *prev = *headref;              
    newnode->data = newdata;            //assigning data to new node
    newnode->next = NULL;     
          
    if(*headref == NULL){               //if list is empty; newnode is head
        *headref = newnode;
        return;
    }

    while(prev->next != NULL)           //traverse till the last node 
        prev = prev->next;

    prev->next = newnode;               //assign newnode to next pointer
    return;
    
}

//function to print list
void printlist(node *n){
    while(n != NULL){
        cout<<n->data<<"\t";
        n = n->next;
    }
}

int main(){
    int size,i,data;
    node *head = NULL;
    cout<<"How many elements would you like to enter?";
    cin>>size;
    cout<<"Enter the elements:";
    for(i=0;i<size;i++){
        cin>>data;
        addToEnd(&head, data);              //appending to end
    }

    cout<<"Created linked list is:\n";
    printlist(head);
        
}