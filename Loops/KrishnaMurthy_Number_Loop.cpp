// Task : Find Out whether the number is krishnmurthy number or not ..

//  145
//  1! + 4! + 5! = 145

#include <iostream>
using namespace std;

int main()
{
    int no, temp, ld, i, mul, sum = 0;
`
    cout << "Enter Number : ";
    cin >> no;

    temp = no;

    while (no > 0)
    {
        mul = 1;
        ld = no % 10;

        for (i = ld; i >= 1; i--)
        {
            mul *= i;
        }
        sum += mul;
        no /= 10;
    }

    if (sum == temp)
    {
        cout << "\n"
             << temp << " is KrishnaMurthy Number." << endl;
    }
    else
    {
        cout << "\n"
             << temp << " is not KrishnaMurthy Number." << endl;
    }
    return 0;
}