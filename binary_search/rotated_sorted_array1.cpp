#include <bits/stdc++.h>
using namespace std;

int rotatedsortedarr(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[low] <= arr[mid]) // left half is sorted
        {
            if (arr[low] <= target && target <= arr[mid])
                high = mid - 1; // target in left → go left
            else
                low = mid + 1; // target in right → go right
        }
        else // right half is sorted
        {
            if (arr[mid] <= target && target <= arr[high])
                low = mid + 1; // target in right → go right
            else
                high = mid - 1; // target in left → go left
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = rotatedsortedarr(arr, target);

    if (result != -1)
        cout << "Target " << target << " found at index " << result << endl;
    else
        cout << "Target " << target << " not found" << endl;

    return 0;
}