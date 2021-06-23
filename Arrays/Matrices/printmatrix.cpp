//taking matrix as an input and printing the same

#include<iostream>
using namespace std;
int main(){
    int i,j,rows,cols;
    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of columns:";
    cin>>cols;
    int matrix[rows][cols];             //declaring the matrix 
    cout<<"Enter the data row-wise:\n";
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            cin>>matrix[i][j];
    
    cout<<"The matrix you entered is:\n";
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}