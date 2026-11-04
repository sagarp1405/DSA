#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int isSorted(int n, vector<int> &a)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (isSorted(n, a))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}