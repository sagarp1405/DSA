// #include <bits/stdc++.h>
// using namespace std;
// vector<int> rotateArray(vector<int> &arr, int n)
// {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
//     return arr;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 5, 6, 5};
//     int n = arr.size();
//     cout << "the original array" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     vector<int> newArray = rotateArray(arr, n);
//     cout << "Array after rotation" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << newArray[i] << " ";
//     }
//     cout << endl;
// }
// OPTIMAL SOLUTION
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void leftRotate(int arr[], int d, int n)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}
int main()
{
    int d;
    cin >> d;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    leftRotate(arr, d, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}