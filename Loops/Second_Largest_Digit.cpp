#include <iostream>
using namespace std;

int main()
{
    int no, ld;
    int max1 = -1, max2 = -1; // Initialize to -1

    cout << "Enter a number: ";
    cin >> no; // 1

    while (no > 0)
    {
        ld = no % 10; // 1

        if (ld > max1) // 1 > 3
        {
            max2 = max1; // max2 = -1
            max1 = ld;   // max1 = 3
        }
        else if (ld < max1 && ld > max2) // 1 < 3 && 1 > 2
        {
            max2 = ld; // max2 = 2
        }

        no /= 10;
    }

    if (max2 != -1)
    {
        cout << "Second Largest Digit is " << max2 << endl;
        cout << "Sum of first and second largest digit is " << max1 + max2 << endl;
    }
    else
    {
        cout << "No second largest digit found.";
    }
    return 0;
}
