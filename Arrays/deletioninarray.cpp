#include<iostream>
using namespace std;
int main(){
    int max,i,j,pos,item,arrSize,choice;

    cout<<"Enter the limit of the array:";      //defining the size of array
    cin>>arrSize;                   

    int int_array[arrSize];

    cout<<"Enter the integer elements of the array:";        //initializing the array
    for(i=0;i<arrSize;i++)              
        cin>>int_array[i];
    
    cout<<"On what basis would you like to delete the element?\n1.Value\t2.Position?\n";            //choice to delete by value or position
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Enter the element:";                         //value of the element
            cin>>item;

            for(i=0;i<arrSize;i++)
            {
                if(int_array[i]==item)                          //if item found
                {                                               //then shift elements to start by one location 
                    for(j=i;j<arrSize-1;j++){
                        int_array[j]=int_array[j+1];
                    }
                    i--;                                    //decrementing i after element location change
                    arrSize--;                                  //modifying array size after deletion
                }
            }            
            break;

        case 2:
            cout<<"Enter the position to delete element:";          //position to insert element
            cin>>pos;

            for(j=pos-1;j<arrSize-1;j++){
                int_array[j]=int_array[j+1];
            }
            arrSize--;
            break;
    }

    cout<<"The elements of the array are:\n";		//printing the array elements
    for(i=0;i<arrSize;i++)              
        cout<<int_array[i]<<"\t";

    return 0;
}
