#include<bits/stdc++.h>
using namespace std;
void rotatearray(vector<int>&arr,int start, int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n,d;
    cout<<"Enter n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter d";
    cin>>d;
    d=d%n;
    rotatearray(arr,0,d-1);
    rotatearray(arr,d,n-1);
    rotatearray(arr,0,n-1);
    cout<<"The array after rotation is ";
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}