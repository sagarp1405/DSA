#include <bits/stdc++.h>
using namespace std;
int nooftimesarrayrotated(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    int index = -1;
    // check if search space is sorted
    // then alwaysarr[low] it will be smaller
    // in that search space
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }
        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            if (arr[mid] < ans)
            {
                index = mid;
                ans = arr[mid];
            }
        }
    }
    return index;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

    int result = nooftimesarrayrotated(arr);

    cout << "Array was rotated " << result << " times" << endl;

    return 0;
}