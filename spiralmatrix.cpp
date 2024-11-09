#include<iostream>
using namespace std;
void input( int*arr[10],int n,int m){
     for (int i = 0; i < n; i++) //till row
    {
        for (int j = 0; j < m; j++) // till col
        {
            cin>>arr[i][j];  // taking input
        }
        
    } 
}
void print( int(*arr)[4],int n,int m){
     for (int i = 0; i < n; i++) //till row
    {
        for (int j = 0; j < m; j++) // till col
        {
            cout<<arr[i][j]<<" ";  // taking input
        }
        cout<<endl;
        
    } 
}

void spiralmatrix(int (*arr)[4],int n,int m){
    int rs=0;
    int re=n-1;
    int cs=0;
    int ce=m-1;
    while (rs<=re && cs<ce)
    {
        //top
        for (int i = cs; i < ce; i++)
        {
            cout<<arr[rs][i]<<" ";
        }
        
        //right
        for (int i = rs; i < re; i++)
        {
            cout<<arr[i][ce]<<" ";
        }
        //bottom
        for (int i = ce; i>cs; i--)
        { 
            if (cs==ce)
            {
                break;
            }
            
            cout<<arr[re][i]<<" ";

        }
        //left
        for (int i = re; i > rs; i--)
        {
            if (rs==re)
            {
               break;
            }
            
            cout<<arr[i][cs]<<" ";
        }

        rs++;
        cs++;
        re--;
        ce--;
    }
   
    
}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralmatrix(matrix,4,4);
}