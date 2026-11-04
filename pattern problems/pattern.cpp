// pattern 1
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      for (int i = 0; i < 5; i++)
//      {
//          for (int j = 0; j < 5; j++)
//          {
//              cout << "*";
//          }
//          cout << endl;
//      }
//  }
// PATTERN 2
#include <bits/stdc++.h>
using namespace std;
void printPattern(int n)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printPattern3(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void printPattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printPattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i - 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern10(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (start % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void printPattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j < space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
            space -= 2;
        }
    }
    cout << endl;
}
void printPattern13(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void printPattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
void printPattern17(int n)
{
}
void printPattern18(int n)
{
    {
        for (int i = 0; i < n; i++)
        {
            // space
            for (int j = 0; j <= n - i - 1; j++)
            {
                cout << " ";
            }
            // character
            char ch = 'A';
            int breakpoint = (2 * i + i) / 2;
            for (int j = 1; j <= 2 * i + 1; j++)
            {
                cout << ch;
                if (j <= breakpoint)
                    ch++;
                else
                    ch--;
            }
            for (int j = 0; j <= n - i - 1; j++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
}
void printPattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern20(int n)
{
    int iniSp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 2; j < iniSp; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        iniSp += 2;
        cout << endl;
    }
    iniSp = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 2; j < iniSp; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        iniSp -= 2;
        cout << endl;
    }
}
void printPattern21(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        int star = i;
        if (i > n)
            star = (2 * n) - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i; j++)
            for (int j = 1; j <= star; j++)
            {
                cout << "*";
            }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        printPattern20(n);
    }
}