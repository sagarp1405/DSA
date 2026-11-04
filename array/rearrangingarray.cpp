#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangearray(vector<int>&arr)
{
    int n=arr.size();
    vector<int>ans(n,0);
    int posindex=0;
    int negindex=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            ans[negindex]=arr[i];
            negindex+=2;
        }
        else
        {
            ans[posindex]=arr[i];
            posindex+=2;
        }
    }
    return ans;
}
int main()
{
    cout<<"Enter the value of n";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>result=rearrangearray(arr);
    cout<<"The array after rearranging is ";
    for(int i=0;i<n;i++)
    {
        cout<<result[i];
    }
    return 0;
}