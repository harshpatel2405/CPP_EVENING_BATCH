/*
Task : Write a function to check whether a number is a magic number.

Number = 1234
Step 1: 1 + 2 + 3 + 4 = 10
Step 2: 1 + 0 = 1
Final = 1 → Magic Number ✅

Number = 123
Step 1: 1 + 2 + 3 = 6
Final = 6 → Not a Magic Number ❌

!Sample Input
Enter number: 19

!Sample Output
19 is a Magic Number
*/

#include <iostream>
using namespace std;

int DigitalRoot(int n)
{
    int ld, sum = 0;

    while (n > 0)
    {
        ld = n % 10;
        sum += ld;
        n /= 10;
    }
    // return sum;
    if (sum > 9)
    {
        return DigitalRoot(sum);
    }
    else
    {
        return sum;
    }
}

int MagicNumber(int n)
{
    int res = DigitalRoot(n);
    if (res == 1)
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

    cout << "Enter a number : ";
    cin >> no;

    int res = MagicNumber(no);
    if (res == 1)
    {
        cout << no << " is magical number..";
    }
    else
    {
        cout << no << " is not magical number...";
    }

    return 0;
}
