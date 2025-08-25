/*
Task : Write a function that accepts a number and returns true if it's both palindrome and prime.
*/

#include <iostream>
using namespace std;

int prime(int n)
{
    int i, count = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int palindrome(int n)
{
    int temp = n;
    int rev = 0;

    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n /= 10;
    }

    if (rev == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int prime_Palindome(int n)
{
    int prim = prime(n);
    int palindrom = palindrome(n);

    if (prim == 1 && palindrom == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int no;

    cout << "Enter a number: ";
    cin >> no;

    int res = prime_Palindome(no);

    if (res == 1)
    {
        cout << no << " is prime as well as palindome.";
    }
    else
    {
        cout << no << " is not prime or palindrome..";
    }

    return 0;
}