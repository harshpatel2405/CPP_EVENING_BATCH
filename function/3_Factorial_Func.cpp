// Task : Write a function to find factorial..
// Factorial of 5 = 120

// 5 * 4 * 3 * 2 * 1 = 120

#include <iostream>
using namespace std;

int factorial(int no)
{
    int i, fact = 1;
    for (i = no; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int no;

    cout << "Enter a number : ";
    cin >> no;

    cout << "factorial of " << no << " is " << factorial(no);
    return 0;
}