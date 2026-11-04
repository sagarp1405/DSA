#include <bits/stdc++.h>
using namespace std;

int longestsubarraywithsumk(vector<int> a, long long k)
{
    map<long long, int> presummap;
    long long sum = 0;
    int maxlen = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }

        long long rem = sum - k;
        if (presummap.find(rem) != presummap.end())
        {
            int len = i - presummap[rem];
            maxlen = max(maxlen, len);
        }
        if (presummap.find(sum) == presummap.end())
        {
            presummap[sum] = i;
        }
    }
    return maxlen;
}