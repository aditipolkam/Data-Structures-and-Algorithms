//program to insert nodes in a linked list
#include<iostream>
#include<string>
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
}

//function to insert in between of the list
void insertAtPosition(node** headref, int data, int pos){
    node *newnode = createNode(data);
    node *prev = *headref;

    for(int i=0;i<pos;i++){
        prev = prev->next;
    }
    newnode->next = prev->next;
    prev->next = newnode;
}

//function to insert node at beginning
void insertAtStart(node** headref,int data){
    node *newnode = createNode(data);
    
    if(*headref == NULL){               //if list is empty; newnode is head
        *headref = newnode;
        return;
    }
    
    newnode->next = *headref;
    *headref = newnode;
}

//function to print list
void printlist(node *n){
    while(n != NULL){
        cout<<n->data<<"\t";
        n = n->next;
    }
}

//function to count elements in the list
int count(node *n){
    int i= 0;
    while(n != NULL){
        i++;
        n = n->next;
    }
    return i;
}

int main(){
    int i,data,pos,choice = 1;
    node *head = NULL;

    cout<<"Enter the first element of the list:";
    cin>>data; 
    insertAtStart(&head,data);

    while(choice == 1){
        cout<<"Enter the element to insert:";
        cin>>data;

        cout<<"Enter the position where you want to insert:";
        cin>>pos;

        if(pos == 1)
            insertAtStart(&head,data);
        else if(pos == count(head)+1)
            appendToList(&head,data);
        else
            insertAtPosition(&head,data,pos);
        
        cout<<"Do you want to insert another element?\tIf yes then press 1.";
        cin>>choice;
    }

    cout<<"Created linked list is:\n";
    printlist(head);

}