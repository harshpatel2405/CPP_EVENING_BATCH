#include <iostream>
using namespace std;

// Debug : NONO Function definition and declaration
void nono()
{
    cout << "No Return Type and No Arguments Type Function Called..\n";
}

// Debug : Function definition and declaration
void noyes(int a , int b)
{
    cout << a << " , " << b << "\tNo Return Type and With Arguments Type Function Called..\n";
}

// Debug : Function Declaration
int yesno();
int yesyes(int a , int b);

int main()
{
    cout << "No and No" << endl;
    nono();

    cout << "\nNo and Yes" << endl;
    noyes(12,24);


    cout << "\nYes and No" << endl << yesno()  << endl;


    cout << "\nYes and Yes" << endl  <<  yesyes(24,12) << endl;

    return 0;
}

int yesno()
{
    cout <<  "With Return Type and No Arguments Type Function Called..\n";
    return 0;
}

int yesyes(int x , int y)
{
    cout << x << " , " << y << "\tWith Return Type and With Arguments Type Function Called..\n";
    return 1;
}