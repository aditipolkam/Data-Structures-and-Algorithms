//program to create graph using arrays
#include<iostream>
using namespace std;
int g[20][20];

void createMatrix(int v, int e)
{
    int v1, v2;
    cout<<"Enter the edges.";
    for(int i = 0; i<e; i++){
        cout<<"Enter start vertex and end vertex:";
        cin>>v1>>v2;
        g[v1][v2] = 1;
    }
}

void printMatrix(int v){
    cout<<"Edges are:\n"
    for(int i=0; i<v; i++)
        for(int j=0; j<v; j++)
            if(g[i][j] == 1)
                cout<<i<<" to "<<j<<"\n";
}
int main()
{
    int vertices, edges;
    cout<<"Enter the number of vertices: ";
    cin>>vertices;
    cout<<"Enter the number of edges: ";
    cin>>edges;
    
    for(int i=0; i<vertices; i++)
        for(int j=0; j<vertices; j++)
            g[i][j] = 0;

    createMatrix(vertices,edges);
    printMatrix(vertices);
}