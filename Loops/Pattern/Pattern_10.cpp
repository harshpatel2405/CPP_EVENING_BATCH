/*
Task :
a A
b B
c C
d D
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    char ch = 'a', hs = 'A';

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            if(j % 2 == 1)
            {
                cout << ch++;
            }
            else
            {
                cout << hs++;
            }
        }
        cout << "\n";
    }
    return 0;
}