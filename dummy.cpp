#include <iostream>
using namespace std;

// int bill(int items)
// {

// }

int main()
{
    int items, i;
    string name;
    cout << "Enter you Name : ";
    cin >> name;
    cout << "How many Items are there : ";
    cin >> items;
    for (i = 1; i <= items ; i++)
    {
        cout << "Enter the name to ITEM " << i << " : ";
        cin >> items;
    }
    // bill(items);
}