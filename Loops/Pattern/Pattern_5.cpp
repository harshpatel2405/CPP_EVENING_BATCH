/*
5)
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, k = 0;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            k++;
            cout << k << "\t";
        }
        cout << "\n";
    }
    return 0;
}