/*
Task : Find factorial of a number using recursion
*/

#include <iostream>
using namespace std;

int factorialRecursion(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorialRecursion(n - 1);

    /*
    [
        1) 5 * factorialRecursion(4)
                1) 4 * factorialRecursion(3)
                        1) 3 * factorialRecursion(2)
                                1) 2 * factorialRecursion(1)
                                        1) 1
    ]

     [
        1) 5 * 24
                1) 4 * 6
                        1) 3 * 2
                                1) 2 * 1
                                        1) 1
    ]
    */
}

int main()
{
    int no;

    cout << "Enter a number : ";
    cin >> no;
    if (no > 0)
    {
        cout << "Factorial of " << no << " is " << factorialRecursion(no);
    }
    else
    {
        cout << "Enter positive value..";
    }
    return 0;
}