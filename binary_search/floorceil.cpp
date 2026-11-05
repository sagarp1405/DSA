// floor - larget element <=x
//  ceil -smallest element >=x
#include <bits/stdc++.h>
using namespace std;
pair<int, int> floorceil(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int floorvalue = -1;
    int ceilvalue = -1;
    // floor
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x)
        {
            floorvalue = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // ceil
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            ceilvalue = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {floorvalue, ceilvalue};
}
int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int x = 6;

    pair<int, int> result = floorceil(arr, x);

    cout << "Floor of " << x << " = " << result.first << endl;
    cout << "Ceil  of " << x << " = " << result.second << endl;

    return 0;
}