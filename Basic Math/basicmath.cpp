// PROBLEM 1
// Given the number n find out and return the number of digits present in the number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     int lastdig;
//     int count = 0;
//     while (num > 0)
//     {
//         lastdig = num % 10;
//         num = num / 10;
//         if (lastdig > 0)
//         {
//             count++;
//         }
//     }
//     cout << count;
// }
// Time complexity of the problem O(log10(n))
// whenever you are computing time complexity for something whic involves division then log is used
// the number which is divided is taken as log base num/n O(logn(n))
// PROBLEM 2
// write the code to print the reverse of the number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int revnum=0;
//     int num;
//     int last_digit;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     while (num > 0)
//     {
//         last_digit = num % 10;
//         revnum=(revnum*10)+last_digit;
//         num = num / 10;
//     }
//     cout<<revnum;
// }
// PROBLEM 3
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     int revnum = 0;
//     int last_dig;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     int original_num = num;
//     while (num > 0)
//     {
//         last_dig = num % 10;
//         revnum = (revnum * 10) + last_dig;
//         num = num / 10;
//     }
//     if (revnum == original_num)
//     {
//         cout << "It is a palindrome number" << endl;
//     }
//     else
//     {
//         cout << "Not a palindrome number" << endl;
//     }
// }
// PROBLEM 4 WRITE CODE TO CHECK ARMSTRONG NUMBER
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     int last_digit;
//     int sum = 0;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     int dup = num;
//     while (num > 0)
//     {
//         last_digit = num % 10;
//         sum = sum + last_digit * last_digit * last_digit;
//         num = num / 10;
//     }
//     if (sum == dup)
//     {
//         cout << "It is amstrong number" << endl;
//     }
//     else
//     {
//         cout << "It is not an amstrong number" << endl;
//     }
// }
// PROBLEM 5
// print all the divisors of the number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     for (int i = 1; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }
// PROBLEM 6 to check prime number or not
// prime number -the number which exactly has 2 factors 1 and number itself
// #include <bits/stdc++.h>//tme complexity for this operation is O(n)
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     int count = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         cout << "Prime number" << endl;
//     }
//     else
//     {
//         cout << "Not a Prime Number" << endl;
//     }
// }
// Method 2 to find out if a number is prime or not
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     int count = 0;
//     for (int i = 1; i * i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//             if ((num / i) != i)
//             {
//                 count++;
//             }
//         }
//     }
//     if (count == 2)
//     {
//         cout << "Prime number" << endl;
//     }
//     else
//     {
//         cout << "Not prime number" << endl;
//     }
// }
// WRITE Code to find HCF or GCD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int gcd;
    int n1;
    int n2;
    cout << "Enter both n1 and n2" << endl;
    cin >> n1 >> n2;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % 1 == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
}