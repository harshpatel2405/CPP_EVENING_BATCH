#include <iostream>
using namespace std;

int main()
{
    long int i, j, no, count = 0, prime = 0, loopCount = 0;

    for (i = 1; i <= 100; i++)
    {
        no = i;
        count = 1;

        for (j = 2; j <= no / 2; j++)
        {
            loopCount++;
            if (no % j == 0)
            {
                count = 0;
                break;
            }
        }
        if (count == 1)
        {
            prime++;
        }
    }

    cout << "\n\nTotal Prime Count is " << prime;
    cout << "\nTotal Loop Count is " << loopCount;

    return 0;
}
