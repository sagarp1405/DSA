#include <bits/stdc++.h>
using namespace std;

long long maxsubarray(int arr[], int n)
{
    long long sum = 0;
    long long maxi = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxi)
            maxi = sum;

        if (sum < 0)
            sum = 0;
    }

    return maxi;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long result = maxsubarray(arr, n);

    cout << "Maximum subarray sum = " << result;

    return 0;
}
