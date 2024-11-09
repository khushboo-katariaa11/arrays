#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
bool isduplicate(int* arr, int n){
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==arr[i-1])
        {
           return 1;
        }
        
    }
    return 0;
    
}
int main(){
      int arr[]={7,1,5,3,6,5};
    int result=isduplicate(arr,6);
    cout<<result;


}