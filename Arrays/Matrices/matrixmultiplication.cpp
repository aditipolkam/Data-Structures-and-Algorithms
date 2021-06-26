//matrix multiplication program

#include<iostream>
using namespace std;
int main(){
    int i,j,k,rows1,cols1,rows2,cols2;

    cout<<"Enter the number of rows and coloums of matrix1:";
    cin>>rows1>>cols1;

    cout<<"Enter the number of rows and coloums of matrix2:";
    cin>>rows2>>cols2;

    int matrix1[rows1][cols1];             //declaring matrix1
    int matrix2[rows2][cols2];              //declaring matrix2

    if(cols1==rows2){                   //checking condition for matric multiplication
       
        int mul[rows1][cols2];                    //declaring matrix to store addition
        cout<<"Enter the data row-wise for matrix1:\n";         
        for(i=0;i<rows1;i++)
            for(j=0;j<cols1;j++)
                cin>>matrix1[i][j];

        cout<<"Enter the data row-wise for matrix2:\n";
        for(i=0;i<rows2;i++)
            for(j=0;j<cols2;j++)
                cin>>matrix2[i][j];
        
        cout<<"The multiplication of matrices you entered is:\n";
        for(i=0;i<rows1;i++){
            for(j=0;j<cols2;j++){
                mul[i][j]=0;              
                for(k=0;k<cols1;k++){
                    mul[i][j]=mul[i][j]+matrix1[i][k]*matrix2[k][j];            //multiplication of matrix elements
                }
                cout<<mul[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"Multiplication not possible.";
    }
    return 0;
}