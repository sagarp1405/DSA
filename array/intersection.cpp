#include <bits/stdc++.h>
using namespace std;
vector<int> findarrayintersection(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}