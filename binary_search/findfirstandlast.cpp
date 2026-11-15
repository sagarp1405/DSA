// #include <bits/stdc++.h>
// using namespace std;
// int lowerbound(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     int low = 0;
//     int high = n - 1;
//     int ans = n;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] >= target)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// int upperbound(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     int low = 0;
//     int high = n - 1;
//     int ans = n;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] > target)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// pair<int, int> findfirstandlast(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     int lb = lowerbound(arr, target);
//     if (lb == n || arr[lb] != target)
//     {
//         return {-1, -1};
//     }
//     return {lb, upperbound(arr, target) - 1};
// }
// int main()
// {
//     vector<int> arr = {1, 2, 4, 4, 4, 4, 7, 9};
//     int target = 4;

//     pair<int, int> result = findfirstandlast(arr, target);

//     cout << "First occurrence: " << result.first << endl;
//     cout << "Last  occurrence: " << result.second << endl;

//     if (result.first != -1)
//         cout << "Count: " << result.second - result.first + 1 << endl;
//     else
//         cout << "Count: 0 (not found)" << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int find_first(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int first = -1;
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
    return first;
}
int findlast(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int last = -1;
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
    return last;
}
int main()
{
    vector<int> arr = {1, 2, 4, 4, 4, 4, 7, 9};
    int target = 4;

    cout << "First: " << find_first(arr, target) << endl;
    cout << "Last:  " << findlast(arr, target) << endl;
    cout << "Count: " << findlast(arr, target) - find_first(arr, target) + 1 << endl;

    return 0;
}