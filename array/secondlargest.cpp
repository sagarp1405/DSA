#include <iostream>
#include <vector>
#include <climits> // Required for INT_MAX

using namespace std;

// Finds the second largest element
int secondLargest(vector<int> &a, int n)
{
    int largest = a[0];
    int slargest = -1;
    // FIX 1: Loop condition changed from i <= n to i < n
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}

// Finds the second smallest element
int secondSmallest(vector<int> &a, int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }
    // FIX 2: Return statement moved outside the loop
    return ssmallest;
}

// Returns a vector containing second largest and second smallest elements
vector<int> getSecondorderelements(int n, vector<int> a)
{
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);
    // FIX 3: Added a return statement
    return {slargest, ssmallest};
}

// Main function to run the code
int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    int n = arr.size();

    // FIX 4: Completed the function call and result storage
    vector<int> result = getSecondorderelements(n, arr);

    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;

    return 0; // Standard practice for successful execution
} // Added missing closing brace