/*
Task : Pencil Price Comparison
Write a program to compare the prices of two pencils and display the more expensive one.

!Sample Input:
Pencil 1 Price: 2.50
Pencil 2 Price: 3.75

!Sample Output:
Pencil 2 is more expensive.
*/

#include <iostream>
using namespace std;

class Pencil
{
    int p1, p2;

public:
    void SetPrice(int p1, int p2)
    {
        this->p1 = p1;
        this->p2 = p2;
    }

    void PriceComparison()
    {
        if (p1 > p2)
        {
            cout << "Pencil 1 is more Expensive...";
        }
        else
        {
            cout << "Pencil 2 is more expensive...";
        }
    }
};

int main()
{
    // info : getting pencil price from user
    int pencil1, pencil2;

    cout << "Pencil 1 Price: ";
    cin >> pencil1;

    cout << "Pencil 2 Price: ";
    cin >> pencil2;

    // info : creating object of pencil class
    Pencil pencilObj;

    pencilObj.SetPrice(pencil1, pencil2);
    pencilObj.PriceComparison();

    return 0;
}