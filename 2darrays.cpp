#include<iostream>
using namespace std;
int main(){
    // int matrix[2][2]={{1,2},{3,4}}; //creating 2d array
    // cout<<matrix[1][1]; //accesing element at row 1 and index 1
    int matrixnew[3][3];
    for (int i = 0; i < 3; i++) //till row
    {
        for (int j = 0; j < 3; j++) // till col
        {
            cin>>matrixnew[i][j];  // taking input
        }
        
    } 


    for (int i = 0; i < 3; i++) //till row
    {
        for (int j = 0; j < 3; j++) // till col
        {
            cout<<matrixnew[i][j]<<" ";  // printing output
        }
        cout<<endl;
        
    }

//     Question 1 : Print the number of all 7’s that are in the 2d array.
// Example :
// Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
// Output - 2
int count=0;
for (int i = 0; i < 3; i++) //till row
    {
        for (int j = 0; j < 3; j++) // till col
        {
            if(matrixnew[i][j]==7) {
               count+=1;

        }
        
        
    }
    
}
// cout<<count;


// Question 2 : Print out the sum of the numbers in the second row of the “nums” array.
// Example :
// Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
// Output - 18
int countnew=0;

        for (int j = 0; j < 3; j++) // till col
        {
           
               countnew+=matrixnew[2][j];

        
        
        
    
    
}
// cout<<countnew;

// Question 3 : Write a program to Find Transpose of a Matrix. 

  for (int i = 0; i < 3; i++) //till row
    {
        for (int j = 0; j < 3; j++) // till col
        {
            cout<<matrixnew[j][i]<<" ";  // printing output
        }
        cout<<endl;
        
    }





}