/*
Task : Write a function to return the digital root of a number (repeated sum of digits till single digit).

!Sample Input
Enter the number : 9561

!Sample Output
Final Sum : 3
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

int main()
{
    int no;

    cout << "Enter a number : ";
    cin >> no;

    int res = DigitalRoot(no);
    cout << "Digital Root of " << no << " is " << res;

    return 0;
}
