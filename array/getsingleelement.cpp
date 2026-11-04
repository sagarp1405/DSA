#include <bits/stdc++.h>
using namespace std;
int getsingleelement(vector<int> &arr)
{
    int xorr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}
// optimal approach