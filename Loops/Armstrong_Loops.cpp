#include <iostream>
using namespace std;

int main()
{
    // 153 --> 1^3 + 5^3 + 3^3  = 153
    // 1674  --> 
    // 0 to 9 are all armstrong numbers..

    int no, ld, armstrong = 0,temp;

    cout << "Enter a number : ";
    cin >> no;

    temp = no;

    while (no > 0)
    {
        ld = no % 10;
        armstrong += ld * ld * ld;
        no /= 10;
    }
    
    if (armstrong == temp)
    {
        cout << "Number is armstrong..";
    }
    return 0;
}