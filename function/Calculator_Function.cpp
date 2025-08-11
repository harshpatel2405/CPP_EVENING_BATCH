#include <iostream>
using namespace std;

void add()
{
    int a = 12, b = 124;
    cout << "Addition of " << a << " and " << b << " is " << a + b;
}

void subtract(int a, int b) // formal parameters
{
    cout << "Subtraction of " << a << " and " << b << " is " << a - b;
}

int multiply()
{
    int x = 10, y = 5;
    cout << "Multiplication of " << x << " and " << y << " is " << x * y;
    return 0;
}

int divide(int x, int y)
{
    x = 12;
    cout << "Division of " << x << " and " << y << " is " << x / y << endl;
    return 0;
}

int main()
{
    int ch, a, b;
    cout << "1) Addition \n2) Subtraction\n3) Multiplication\n4) Division\n";
    cout << "Enter Your Choice : ";
    cin >> ch;

    cout << "Enter Two Numbers : ";
    cin >> a >> b;

    switch (ch)
    {
    case 1:
        cout << "Addition  NoNo" << endl;
        add();
        break;

    case 2:
        cout << "Subtraction  NoYes" << endl;
        subtract(a, b); // actual parameters
        break;

    case 3:
        cout << "Multiplication YesNo" << endl;
        cout << multiply(); // actual parameters
        break;

    case 4:
        cout << "Division YesYes" << endl;
        int a = divide(a, b);
        cout << a;
        break;
    }

    return 0;
}