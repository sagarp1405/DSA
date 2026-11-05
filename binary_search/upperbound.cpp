// Given a sorted array of integers arr and a target value x, find the index of the upper bound of x. The upper bound is defined as the index of the first element in the array which is strictly greater than x. If no such element exists because all elements are smaller than or equal to x, return the size of the array N.
// Example 1
// Input: arr = [1, 3, 5, 7, 9, 11], x = 5
// Output: 3
// Explanation: The first element that is strictly greater than 5 is 7, which is located at index 3.
#include <bits/stdc++.h>
using namespace std;
int upperbound(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int x = 4;

    int result = upperbound(arr, x);

    cout << "Upper bound of " << x << " is at index " << result << endl;

    return 0;
}