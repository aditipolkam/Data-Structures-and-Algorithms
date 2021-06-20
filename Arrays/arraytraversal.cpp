#include<iostream>
using namespace std;
int main(){
    int max,i;

    cout<<"Enter the limit of the array:";      //defining the size of array
    cin>>max;
    int int_array[max];
    cout<<"Enter the integer elements of the array:";        //initializing the array
    for(i=0;i<max;i++)              
        cin>>int_array[i];
    
    cout<<"The elements of the array are:\n";
    for(i=0;i<max;i++)              
        cout<<int_array[i]<<"\n";

    return 0;
}