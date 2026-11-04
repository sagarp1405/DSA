#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> &arr)
{
    vector<int> ans;
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    sort(arr.begin(), arr.end());
    return ans;
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = leaders(arr);

    cout << "Leaders in the array are: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}
