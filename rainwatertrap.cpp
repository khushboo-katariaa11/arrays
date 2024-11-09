#include <iostream>
#include <climits>
using namespace std;
int rainwatertrap(int*height, int n){

    int mright[1000];
    int mleft[1000];
    mright[0]=height[0];
    mleft[n-1]=height[n-1];

    for (int i = 1; i < n; i++)
    {
        mright[i]=max(mright[i-1],height[i-1]);
    }
    for (int i = n-2; i >=0; i--)
    {
        mleft[i]=max(mleft[i+1],height[i+1]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<mright[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<mleft[i]<<" ";
    // }
  
int trap=0;
    for (int i = 0; i <n; i++)
    {
        int current= (min(mright[i],mleft[i]))-height[i];
        if (current>0)
        {
            trap+=current;
        }
        
    }
    return trap;
    
    
}
int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int r=rainwatertrap(arr,9);
    cout<<r;

}
