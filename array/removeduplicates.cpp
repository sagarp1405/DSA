#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0; // by default the the first element is unique
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 5};
    int n = arr.size();
    cout << "original array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int newsize = removeDuplicates(arr, n);
    cout << "array after removing duplicates";
    for (int i = 0; i < newsize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}