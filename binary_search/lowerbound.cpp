// The lower bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
// Input : nums= [1,2,2,3], x = 2
// Output:1
// Explanation:
// Index 1 is the smallest index such that arr[1] >= x.
#include <bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
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
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
    int x = 11;
    cout << "the lowerbound index is " << lowerbound(arr, x) << endl;
    return 0;
}