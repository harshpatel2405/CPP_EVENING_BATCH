// Task : Recursive function to check whether a number is palindrome.

#include <iostream>
using namespace std;

int Palindrome(int no) // 1234
{
    // -> back condition
    if (no == 0)
    {
        return 0;
    }

    return (no % 10) + Palindrome(no / 10) * 10;
}

int main()
{
    int no;

    cout << "Enter a number: ";
    cin >> no;

    int ans = Palindrome(no);

    if (ans == no)
    {
        cout << no << " is palindrome...";
    }
    else
    {
        cout << no << " is not palindrome...";
    }
    return 0;
}