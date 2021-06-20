//searching element in an array, occuring multiple times and printing the location
#include<iostream>
using namespace std;
int main(){
    int max,i,item,count=0,j=0;
    cout<<"Enter the limit of the array:";      //defining the size of array
    cin>>max;
    int int_array[max],loc[max];

    cout<<"Enter the integer elements of the array:";        //initializing the array
    for(i=0;i<max;i++)              
        cin>>int_array[i];

    cout<<"Enter the element to be searched:";
    cin>>item;                                      //input element to be searched

    
    for(i=0;i<max;i++)              
       if(int_array[i]==item){                      //check if entered element matches the array element
           count++;                                    //if matched increment the count
            loc[j] = i;                                 //add the index to the location array
            j++;
       }
            
    cout<<"The element is present in the array "<<count<<" times at locations:\n";		//printing the count of the element
    for(i=0;i<count;i++)
        cout<<loc[i]+1<<"\t";                           //printing the locations
    return 0;
}