// move zeroes to the end of the array
//  brute force
//  #include<bits/stdc++.h>
//  #include<iostream>
//  using namespace std;

// vector<int> movezeroes(int n, vector<int> a) {
//     // This part is correct! It gets all the non-zero elements.
//     vector<int> temp;
//     for(int i = 0; i < n; i++) {
//         if(a[i] != 0) {
//             temp.push_back(a[i]);
//         }
//     }

//     // --- FIX STARTS HERE ---

//     // 1. Get the number of non-zero elements.
//     int nz = temp.size();

//     // 2. Add the correct number of zeros to the end of the temp vector.
//     // The number of zeros to add is n - nz.
//     for(int i = 0; i < n - nz; i++) {
//         temp.push_back(0);
//     }

//     // 3. Return the final vector.
//     return temp;
// }

// int main() {
//     vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
//     int n = arr.size();
//     vector<int> result = movezeroes(n, arr);

//     // Print the result to see if it worked
//     for(int i = 0; i < n; i++) {
//         cout << result[i] << " ";
//     }
//     // Expected output: 1 2 3 4 1 0 0 0
//     cout << endl;

//     return 0;
// }
// optimal solution
#include <bits/stdc++.h>
using namespace std;

// CORRECTION 1: The entire function definition is moved before main().
// This declares the function so main() knows how to call it.
vector<int> movezero(int n, vector<int> &arr)
{
    // This part correctly finds the first zero
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // This handles the case where there are no zeros, which is good.
    if (j == -1)
    {
        return arr;
    }

    // This logic correctly swaps non-zeros into the place of zeros.
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // CORRECTION 2: Added a return statement for the main logic path.
    // This ensures the function always returns the modified vector.
    return arr;
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
    int n = arr.size();

    // Now this function call is valid
    vector<int> result = movezero(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    // Expected output: 1 2 3 4 1 0 0 0
    cout << endl;

    return 0;
}