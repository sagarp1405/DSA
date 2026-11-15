// Given an integer array nums of size N, sorted in ascending order with distinct values, and then rotated an unknown number of times (between 1 and N), find the minimum element in the array.
// Example 1:
// Input : nums = [4, 5, 6, 7, 0, 1, 2, 3]
// Output: 0
// Explanation: Here, the element 0 is the minimum element in the array.
#include <bits/stdc++.h>
using namespace std;
bool rotatedsortedarr2(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            return true;
        }
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= k && k <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {2, 5, 6, 0, 0, 1, 2};
    int k = 0;

    bool found = rotatedsortedarr2(arr, k);

    if (found)
        cout << "Target " << k << " FOUND in the array" << endl;
    else
        cout << "Target " << k << " NOT found in the array" << endl;

    return 0;
}
