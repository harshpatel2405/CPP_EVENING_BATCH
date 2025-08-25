/*
Task : Write a (recursive) function to count the number of digits “7”(target) present in a given integer.

Enter a number: 172737
Output: The digit 7 appears 3 times.


Enter a number: 2025
Output: The digit 7 appears 0 times.


Enter a number: 77777
Output: The digit 7 appears 5 times.

*/

#include <iostream>
using namespace std;

int NumberCount(int n)
{
    int count = 0;
    if(n  == 0)
    {
        return 0;
    }
   
        int ld = n % 10;
        n /= 10;
        if (ld == 7)
        {
            return 1 + NumberCount(n);
        }
        else 
        {
            return NumberCount(n);
        }
    

    cout << "The Digit 7 Appears " << count << " times";
}

int main()
{
    int no;

    cout << "Enter a number : ";
    cin >> no;

    cout << "The Digit 7 Appears " <<   NumberCount(no) << " times";
    return 0;
}