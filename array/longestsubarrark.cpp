#include<bits/stdc++.h>
using namespace std;
int longestsubarraywithk(vector<int>&arr,long long k)
{
    map<long long,int>presummap;
    long long sum =0;
    int maxlen=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        if(sum==k)
        {
            maxlen=max(maxlen,i+1);
        }
        long long rem=sum-k;
        if(presummap.find(rem)!=presummap.end())
        {
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);
        }
        if(presummap.find(sum)==presummap.end())
        {
            presummap[sum]=i;
        }
    }
    return maxlen;
}
int main() {
    int n, k;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> k;

    cout << "Longest subarray length: " 
         << longestsubarraywithk(arr, k);

    return 0;
}