/*
Task : Create a function that prints all prime factors of a number

Input: 84        -- 1, 2, 3, 4, 6, 7, 12, 14, 21, 28, 42, 84
Output: 2 3 7

Enter a number: 60
Prime Factors: 2 3 5

*/

int primeCheck(int n)
{
    int f = 1;
    if(n == 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 0;
            break;
        }
    }

    if (f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void factor(int n);

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    factor(n);
    return 0;
}

void factor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (primeCheck(i))
            {
                cout << i << "\t";
            }
        }
    }
}