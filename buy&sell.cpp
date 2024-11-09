#include <iostream>
#include <climits>
using namespace std;
int buySell(int *sell, int n){  //given an array of price you have to find the maximum profit.
    int buy[1000];
    buy[0]=INT_MAX;
    for (int i = 1; i < n; i++)
    {
        buy[i]=min(buy[i-1],sell[i-1]);
    }
    int profit=0;
    for (int i = 0; i < n; i++)
    {
        profit=max(profit, (sell[i]-buy[i]));
    }
    
    
  return profit;  

}
int main(){
    int arr[]={7,1,5,3,6,4};
    int result=buySell(arr,6);
    cout<<result;

    // max profit will be if we buy at day 1 =0rs
    //and sell at day 0=7rs;


}