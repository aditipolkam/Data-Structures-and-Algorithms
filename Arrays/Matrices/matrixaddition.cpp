//matrix addition program

#include<iostream>
using namespace std;
int main(){
    int i,j,rows,cols;
    cout<<"Enter the number of rows and coloums of matrix:";
    cin>>rows>>cols;

    int matrix1[rows][cols];             //declaring matrix1
    int matrix2[rows][cols];              //declaring matrix2
    int sum[rows][cols];                    //declaring matrix to store addition

    cout<<"Enter the data row-wise for matrix1:\n";         
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            cin>>matrix1[i][j];

    cout<<"Enter the data row-wise for matrix2:\n";
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            cin>>matrix2[i][j];
    
    cout<<"The sum of matrices you entered is:\n";
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];              //summation of matrix elements
            cout<<sum[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}