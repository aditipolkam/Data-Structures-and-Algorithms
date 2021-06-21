#include<iostream>
using namespace std;
int main(){
    int max,i,j,pos,item,arrSize;

    cout<<"Enter the limit of the array:";      //defining the size of array
    cin>>arrSize;                   
    max = arrSize+1;                        //size for modified array 
    int int_array[max];

    cout<<"Enter the integer elements of the array:";        //initializing the array
    for(i=0;i<arrSize;i++)              
        cin>>int_array[i];
    
    cout<<"Enter the position to insert element:";          //position to insert element
    cin>>pos;

    cout<<"Enter the element:";
    cin>>item;

    for(j=max;j>=pos;j--){
        int_array[j+1] = int_array[j];                  //shifting array elements upto the specified position
    }
    int_array[pos] = item;

    cout<<"The elements of the array are:\n";		//printing the array elements
    for(i=0;i<max;i++)              
        cout<<int_array[i]<<"\t";

    return 0;
}