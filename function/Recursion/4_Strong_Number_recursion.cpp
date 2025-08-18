/*
Task : Strong Number Check using function
    Example: 145 → 1! + 4! + 5! = 145.
*/

// function   digit seperator
// function   factorial

int factorial(int n)
{
    int i, fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int strongNumber(int n)
{
    int ld, temp = n, sum = 0;
    while (n > 0)
    {
        ld = n % 10;
        sum += factorial(ld);
        n /= 10;
    }
    if (sum == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int no;
    cout << "Enter a number : ";
    cin >> no;

    int result = strongNumber(no);

    if (result == 1)
    {
        cout << no << " is strong number..";
    }
    else
    {
        cout << no << " is not strong number..";
    }
    return 0;
}