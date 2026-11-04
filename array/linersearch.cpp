#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
}
int linearsearch(int n, int num, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}