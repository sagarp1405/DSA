#include <bits/stdc++.h>
using namespace std;
int main()
{
    // write a program the takes the input as age
    // and prints if you are adult or not
    // int age;
    // cout << "Enter the age:" << endl;
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "Adult" << endl;
    // }
    // else
    // {
    //     cout << "Not Adult" << endl;
    // }
    // int marks;
    // cout << "Enter the marks" << endl;
    // cin >> marks;
    // if (marks < 25)
    // {
    //     cout << "Fail" << endl;
    // }
    // else if (marks >= 25 && marks <= 45)
    // {
    //     cout << "Grade:E" << endl;
    // }
    // else if (marks >= 45 && marks <= 49)
    // {
    //     cout << "Grade:D" << endl;
    // }
    // else if (marks >= 50 && marks <= 59)
    // {
    //     cout << "Grade:C" << endl;
    // }
    // else if (marks >= 60 && marks <= 79)
    // {
    //     cout << "Grade:B" << endl;
    // }
    // else if (marks >= 80 && marks <= 100)
    // {
    //     cout << "Grade:A" << endl;
    // }
    // nested loop
    // int age;
    // cout << "Enter the age" << endl;
    // cin >> age;
    // if (age < 18)
    // {
    //     cout << "Not eligible for the job" << endl;
    // }
    // else if (age <= 57)
    // {
    //     cout << "Eligible for the job" << endl;
    //     if (age >= 55)//nested if-else statements
    //     {
    //         cout << "Eligible for job,but retirement soon" << endl;
    //     }
    // }
    // else
    // {
    //     cout << "Retirement" << endl;
    // }
    // switch case
    int day_num;
    cout << "Enter the number:" << endl;
    cin >> day_num;
    switch (day_num)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid";
    }
    cout << "check";
    return 0;
}
