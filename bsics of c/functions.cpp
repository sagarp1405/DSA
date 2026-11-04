#include <bits/stdc++.h>
using namespace std;
// functions is the set of code that performs something for you
// functions are used to modularize the code
// funnctions are used to increase readability
//  functions are used as the same code multiple times
//  void-does not return anything
// parameterised functions-in which we pass parameters
// non-parameterised -we do not pass parameters
// void printName(string name)
// {
//     cout << "Hey" << name << endl;
// }
// int main()
// {
//     string name;
//     cout << "Enter the name:" << endl;
//     cin >> name;
//     printName(name);
// }
// void printSum(int a, int b)
// {
//     int sum = a + b;
//     cout << "the sum of and b is " << sum << endl;
// }
// int main()
// {
//     int a;
//     int b;
//     cout << "Enter the value of a and b:" << endl;
//     cin >> a >> b;
//     printSum(a, b);
// }
// void doSomething(int num) // pass by value-a copy of parameter is sent
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }
// int main()
// {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
// }
// pass by reference instead od passing s pass &s
// what id does it passes the address of the paramenter and the original variable is changed
void doSomething(int arr[], int n)
{
    arr[0] += 1;
    cout << "the value inside the function is" << arr[0] << endl;
}
int main()
{
    int i;
    int n;
    int arr[n];
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i <= n; i++)
    {
        cout << "the array elements are:" << arr[i] << endl;
    }
    doSomething(0, 5);
}
// Array is always passed with reference