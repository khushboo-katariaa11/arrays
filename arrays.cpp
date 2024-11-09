#include <iostream>
#include <climits>
using namespace std;

int linearsearch(int *arr, int n, int target){  //sequential search
    for (int i = 0; i < n; i++)
    {
       if (arr[i]==target)
       {
        return i;
       }
       
    }
    return -1;
    
}
int reverse(int *arr, int n){   //reverse the given array
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int swap(int &a, int&b){  // swap two variables
    int c=a;
    a=b;
    b=c;
}
int binarysearch(int *arr, int n, int target){  //search element through midpoint
       int start=0;
    int end=n-1;
    while (start<=end)
    {
       int mid= (start+end)/2;
       if(arr[mid]==target){
        return mid;

       }
       else if(target>arr[mid]){
        start=mid+1;
       } 
       else{
        end=mid-1;
       }
    }
}
int main(){
    // // creating array
    int arr[5]={4,5,6,7,8};
    // cout<<arr[2]; // accessing elemt at index 2
    // cout<<sizeof(arr); //20 = 4(size of int)* 5(no of elements);
    // cout<<sizeof(arr)/sizeof(arr[1]); // this will return the number of elements in an array

    // // taking input
    // int arrnew[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>arrnew[i];
    // }
    // // taking output
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arrnew[i]<<" ";
    // }

    // //find largest number in an array
    // int maxnum=INT_MIN;
    // for (int i = 0; i < 5; i++)
    // {
    //    if (arrnew[i]>maxnum)
    //    {
    //     maxnum=arrnew[i];
    //    }
       
    // }
    // cout<<maxnum;

    




    
    

}