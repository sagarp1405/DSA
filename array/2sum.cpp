// better solution
// #include<bits/stdc++.h>
// using namespace std;
// string read(int n,vector<int>book,int target)
// {
//     map <int,int>mpp;
//     for(int i=0;i<n;i++)
//     {
//         int a=book[i];
//         int more=target-a;
//         if(mpp.find(more) !=mpp.end())
//         {
//             return "YES";
//         }
//     }
//     return"NO";
// }
// optimal solution
#include <bits/stdc++.h>
using namespace std;
string twosum(vector<int> book, int target)
{
    int n = book.size();
    int left = 0;
    int right = n - 1;
    sort(book.begin(), book.end());
    while (left < right)
    {
        int sum = book[left] + book[right];
        if (sum == target)
        {
            return "YES";
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "NO";
}