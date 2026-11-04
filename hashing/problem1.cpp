#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // prefetch
    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]];
    }
    cout << "[";
    for (auto it = hash.begin(); it != hash.end(); ++it)
    {
        cout << "[" << it->first << ", " << it->second << "]";
        if (next(it) != hash.end())
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}