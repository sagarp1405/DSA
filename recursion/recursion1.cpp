// // PROBLEM 1 print name n times
// #include <bits/stdc++.h>
// using namespace std;
// void printname()
// {
//     int n;
//     cout << "Enter the value of N" << endl;
//     cin >> n;
//     if (n <= 0)
//     {
//         return;
//     }
//     string name;
//     cout << "Enter the name" << endl;
//     cin >> name;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << name << endl;
//     }
//     printname();
// }
// int main()
// {
//     printname();
//     return 0;
// }
// PROBLEM REVERSE THE ARRAY
// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int n, int arr[])
// {
//     if (i >= n / 2)
//     {
//         return;
//     }
//     swap(arr[i], arr[n - i - 1]);
//     f(i + 1, n, arr);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     f(0, n, arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
bool f(int i, string s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return f(i + 1, s);
}
int main()
{
    string s;
    cin >> s;
    cout << f(0, s);
    return 0;
}