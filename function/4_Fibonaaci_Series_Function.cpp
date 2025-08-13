/*
Task : Fibonnaci series

Enter number of terms: 5
Fibonacci Series: 0 1 1 2 3
*/

#include <iostream>
using namespace std;

void fibonaaci(int terms)
{
    int a = 0, b = 1, next, i;
    for (i = 1; i <= terms; i++)
    {
        cout << a << " , ";
        next = a + b; // 2 + 3 = 5
        a = b; // 3
        b = next; // 5
    }
}

// 0  , 1 , 1 , 2 , 3

int main()
{
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    fibonaaci(terms);
    return 0;
}