#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int findtarget(int *arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
int mid = start + (end - start) / 2;

        // int mid = (start / end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[start] <= arr[mid])
        { // left side is sorted
            if (target >= arr[start] && target < arr[mid])
            {
                end = mid -1;
            }
            else
            {
                start = mid +1;
            }
        }
        else
        {
            if (target <= arr[end] && target > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int result = findtarget(arr, 7, -7);
    cout << result;
}