#include <bits/stdc++.h>
using namespace std;
int searchxfromsortedarray(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int x = 23;

    int result = searchxfromsortedarray(arr, x);

    if (result != -1)
        cout << "Element " << x << " found at index " << result << endl;
    else
        cout << "Element " << x << " not found" << endl;

    return 0;
}