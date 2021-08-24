#include<iostream>
using namespace std;
int main()
{
    int num[12] = {33,15,8,7,6,4,234,3,23,24,98,6};
    int size = 12;
    cout<<size<<"\n";
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(num[j]>num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<num[i]<<"\t";
    }
    return 0;
}