#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

// Use standard namespace to avoid typing std:: repeatedly
using namespace std;

// The partition function with the corrected loop condition
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        // Find element on the left that is > pivot
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        // Find element on the right that is <= pivot
        // CORRECTED a bug here: condition now uses 'j' instead of 'i'
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

// Recursive quicksort implementation
void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

// Wrapper function for quicksort
vector<int> quicksort(vector<int> arr)
{
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> sortedArr = quicksort(arr);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    return 0;
}