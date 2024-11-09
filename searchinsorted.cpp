#include<iostream>
using namespace std;
int sortmatrix(int (*arr)[4],int n,int m , int target){
    int r=0;
    int c=n-1;
   
    while(r<=n && c>=0){
         int start=arr[r][c];
        if(start==target){
            return r+c;
        }
        else if (target>start){
            r++;
        }
        else{
            c--;
        }
    }
    return -1;
    
}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int r=sortmatrix(matrix,4,4,9); // enter square matrix for diagonal
    cout<<r;
}