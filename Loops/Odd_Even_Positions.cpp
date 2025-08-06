/*
Task : 1) Task : Write a program to check if the sum of digits at odd positions in a number is greater than those at even positions.

input : 56458   -->  5 + 4 + 8 = 17
                --> 6 + 5  = 11
output : odd sum is greater

input : 98658
        1 3 5   --> 9 + 6 + 8 = 23
         2 4  --> 8 + 5       = 13


        98658
        5 3 1
         4 2



output : Even sum is greater
*/

#include <iostream>
using namespace std;

int main()
{
    int no, ld, even = 0, odd = 0, rev, temp;

    cout << "Enter a number : ";
    cin >> no;

    while (no > 0)
    {
        ld = no % 10;
        rev = rev * 10 + ld;
        no /= 10;
    }
    no = rev;
    for (int i = 1; no > 0; i++)
    {
        ld = no % 10;
        if (i % 2 == 0)
        {
            even += ld;
        }
        else
        {
            odd += ld;
        }
        no /= 10;
    }
    cout << "Odd Sum : " << odd << endl;
    cout << "Even Sum : " << even << endl;
    if (odd > even)
    {
        cout << "Odd Sum is Greater..";
    }
    else
    {
        cout << "Even Sum is Greater.";
    }
    return 0;
}