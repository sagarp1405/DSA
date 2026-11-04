// c++ program to left rotate the array by d spaces
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void rotateArray(int arr[], int n, int d)
{
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++) // storing the array in temp variable
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n; i++) // shiftin of the array by k spaces
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    rotateArray(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}