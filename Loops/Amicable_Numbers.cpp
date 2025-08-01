// 220   a      284  sumA
// 284   b      220  sumB

// a ==  sumB &&  b ==  sumA

#include <iostream>
using namespace std;

int main()
{
    int a, b, i, sumA = 0, sumB = 0;

    cout << "Enter Two Numbers : ";
    cin >> a >> b;

    for (i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            sumA += i;
        }
    }

    for (i = 1; i <= b / 2; i++)
    {
        if (b % i == 0)
        {
            sumB += i;
        }
    }

    if(a ==  sumB &&  b ==  sumA)
    {
        cout << "Amicable Numbers : Yes";
    }   
    else
    {
        cout << "Amicable Numbers : No";
    }
    return 0;
}