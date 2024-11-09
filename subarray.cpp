#include <iostream>
using namespace  std;
#include<climits>

void subarray(int* arr, int n){  //i have to print the all the posible subarray of the given array
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++){
               cout<< arr[k];
            }

            cout<<" ";
            
        }
        cout<<endl;
        
    }
    
}

int maxsumsubaaray1(int *arr, int n){  //maximum sum of subarray:- brute force method
    int maxsum=0;

     for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
       
        { int current=0;
            for (int k = i; k <= j; k++){
               current+=arr[k];
            }
            maxsum=max(maxsum,current);

          
            
        }
      
        
    }
    return maxsum;
}
int maxsumsubaaray2(int *arr, int n){  //maximum sum of subarray:- optimized brute force method
    int maxsum=0;

     for (int i = 0; i < n; i++)
    {int current=0;
        for (int j = i; j < n; j++)
       
        { 
               current+=arr[j];
            
            maxsum=max(maxsum,current);

          
            
        }
      
        
    }
    return maxsum;
}

int maxsumsubaaray3(int *arr, int n){ //kadane's algorithm
int maxsum=0;
int current=0;
for (int i = 0; i < n; i++)
{
    current+=arr[i];
     maxsum=max(maxsum,current);
     
     if (current<0)
     {
        current=0;
     }
     
     
     
}
return maxsum;


}
int maxproductsubaaray3(int *arr, int n){//maximum product of subarray
int left=1;
int right=1;
int maxproduct=INT_MIN;
for (int i = 0; i < n; i++){


    left*=arr[i];
    right*=arr[n-1-i];
    maxproduct=max(maxproduct,max(left,right));
    if(left==0){
        left=1;
    }
    if(right==0){
        right=1;
    }

}
return maxproduct;


}





int main(){

int arr[]={-2,0,-1};
//  subarray(arr,3);
 int result= maxproductsubaaray3(arr,3);
 cout<<result;

}