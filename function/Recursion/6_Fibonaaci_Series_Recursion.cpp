// Task : Recursive function to calculate sum of digits of a number.
/*
Enter a number: 1234
Sum of digits: 10
*/

#include <iostream>
using namespace std;

int RecursiveSumDigits(int n)
{
    //->  back condition
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + RecursiveSumDigits(n / 10);
} // recursion is like a loop 


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = RecursiveSumDigits(n);
    cout << "Sum Of Digits : " << ans;
    return 0;
}