/*
Task : Write with Multiple Pens

? Write a program to input data for 2 pens and display the message when writing with each.

!Sample Input:
Pen 1 Brand: Lamy
Pen 1 Color: Red
Pen 2 Brand: Cross
Pen 2 Color: Blue

!Sample Output:
Lamy pen writes in Red ink.
Cross pen writes in Blue ink
*/

#include <iostream>
using namespace std;

class Pen
{
private: // default
    string brand1, brand2;
    string color1, color2;

public: // public for methods and functions
    void setData(string b1, string c1, string b2, string c2)
    {
        brand1 = b1;
        brand2 = b2;
        color1 = c1;
        color2 = c2;
    }

    void PrintDataFormat()
    {
        cout << brand1 << " writes in " << color1 << " ink." << endl;
        cout << brand2 << " writes in " << color2 << " ink." << endl;
    }
};

int main()
{
    string b1, b2, c1, c2;

    // Info : user input for data to be filed in class
    cout << "Pen 1 Brand: ";
    cin >> b1;
    cout << "Pen 1 Color: ";
    cin >> c1;
    cout << "Pen 2 Brand : ";
    cin >> b2;
    cout << "Pen 2 Color : ";
    cin >> c2;

    // info : object of class Pen
    Pen pen;

    pen.setData(b1, c1, b2, c2);
    pen.PrintDataFormat();
    return 0;
}