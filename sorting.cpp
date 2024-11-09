#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
void print(int *arr , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void bubbleSort(int*arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j <= n-1-i; j++)
        {
          if (arr[j-1]>arr[j])  //ascending and descending
          {
            swap(arr[j-1],arr[j]);
          }
          

    }
   
    
}
 print(arr,n);
}
void selectionSort(int*arr,int n){
    for (int i = 0; i < n; i++)
    {
       int smallest=i;
       for (int j = i+1; j < n; j++)
       {
        if(arr[j]<arr[smallest]){
            smallest=j;
        }
       }
       swap(arr[i],arr[smallest]);
       
    }
    print(arr,n);
    
}
void insertionSort(int*arr,int n){
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        int prev=i-1;
        while (prev>=0&& arr[prev]>current)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=current;
        
    }
    print(arr,n);
    
    
}
void countingSort(int*arr,int n){
    int freq[100000];
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    print(freq,n);
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maximum=max(maximum,arr[i]);
        minimum=min(minimum,arr[i]);
    }
    cout<<minimum<<" "<<maximum<<endl;
    for (int i = minimum,j=0; i <= maximum; i++)
    { 
       while(freq[i]>0){
        arr[j]=i;
        j++;                            
        freq[i]--;

       }
    }
    print(arr,n);
    
    
    
}

int main(){
    int arr[]={3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n= sizeof(arr)/sizeof(arr[0]);
    countingSort(arr,n);
    selectionSort(arr,n);
    insertionSort(arr,n);
    bubbleSort(arr,n);

    //inbuilt sorting methods
    sort(arr,arr+n);
    print(arr,n);
    sort(arr,arr+n, greater <int>());
     print(arr,n);
    

}