/*
Task 9 : Generate the power of a number (a^b) using function


#include <iostream>
using namespace std;

int exponent(int base, int power) // 2  , 3
{
    int i, exp = 1;
    for (i = 1; i <= power; i++)
    {
        exp *= base;
        // exp = exp * base;
        // exp =  1  *  2   =  2
        // exp =  2  *  2   =  4
        // exp =  4  *  2   =  8
    }
    return exp;
}

int main()
{
    int base, power;
    cout << "Enter base : ";
    cin >> base;

    cout << "Enter Power: ";
    cin >> power;

    // with return type and with args...
    int result = exponent(base, power);

    cout << base << " power " << power << " is " << result;
    return 0;
}*/



/*
Task 9 : Generate the power of a number (a^b) using recursion
*/

#include <iostream>
using namespace std;

int exponent(int base, int power) // 2  , 3
{
    
    if(power == 1)
    {
        return base;
    }// back condition
    return base * exponent(base , power - 1);
        // 1) 2 * exponent(2,2);
                 // 1) 2 * exponent(2,1);
                            // 1) 2

        // 1) 2 * 4
                 // 1) 2 * 2
                            // 1) 2
}

int main()
{
    int base, power;
    cout << "Enter base : ";
    cin >> base;

    cout << "Enter Power: ";
    cin >> power;

    // with return type and with args...
    int result = exponent(base, power);

    cout << base << " power " << power << " is " << result;
    return 0;
}