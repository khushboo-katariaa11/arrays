#include<iostream>
using namespace std;
void printdaigonal(int (*arr)[4],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i][i]<<" "; //primary daigonal
    }
    
}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printdaigonal(matrix,4); // enter square matrix for diagonal
}