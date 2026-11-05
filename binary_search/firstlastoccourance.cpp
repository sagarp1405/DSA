#include <bits/stdc++.h>
using namespace std;
pair<int, int> firstlastoccourance(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int first = -1;
    int last = -1;
    // first occourance
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // last occourance
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return {first, last};
}
int main()
{
    vector<int> arr = {1, 2, 4, 4, 4, 4, 7, 9};
    int target = 4;

    pair<int, int> result = firstlastoccourance(arr, target);

    cout << "First occurrence: " << result.first << endl;
    cout << "Last  occurrence: " << result.second << endl;
    cout << "Count: " << (result.first == -1 ? 0 : result.second - result.first + 1) << endl;

    return 0;
}