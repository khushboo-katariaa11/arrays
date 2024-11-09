#include<iostream>
using namespace std;
void rotate(int (*arr)[3],int m,int n){

    // int mat[3][3];
   
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
        // mat[i][j]=arr[n-1-j][i]; 

        swap(arr[i][j], arr[n-j-1][i]);
           
        }
       
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
        //    arr[i][j]=mat[i][j];
           cout<<arr[i][j]<<" ";

           
        }
        cout<<endl;
       
        
    }
  

    
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr,3,3);
}
