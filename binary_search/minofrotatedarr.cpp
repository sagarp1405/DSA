#include <bits/stdc++.h>
using namespace std;
int minofrotatedarr(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[low] <= arr[mid]) // check if left half space is sorted
        {
            ans = min(ans, arr[low]); // answer is lowest of the left sorted part
            low = mid + 1;
        }
        else
        {
            ans = min(ans, arr[mid]); // righ half space find the smallest element
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

    int result = minofrotatedarr(arr);

    cout << "Minimum element in rotated array: " << result << endl;

    return 0;
}