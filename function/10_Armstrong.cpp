#include <iostream>
using namespace std;

void Armstrong(int n)
{
    int temp = n, dc = 0, mul, arm = 0;
    while (n > 0)
    {
        n /= 10;
        dc++;
    } //! this loop if for counting number of digits...

    n = temp;

    while (n > 0) // 123
    {
        int ld = n % 10;
        mul = 1;
        for (int i = 1; i <= dc; i++)
        {
            mul *= ld;
            // !mul  =  mul * ld;
            // !mul  =  1   * 3;
            // !mul  =  3   * 3;
            // !mul  =  9   * 3; = 27
        }
        n /= 10;
        arm += mul;
    }

    if (arm == temp)
    {
        cout << temp << "\t";
    }
   
}

int main()
{
    int sp  , ep;

    cout << "Enter sp and ep : ";
    cin >> sp >> ep;

    for(int i = sp; i <= ep;i++)
    {
        Armstrong(i);
    }
    return 0;
}