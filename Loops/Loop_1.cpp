/*
 5    8

 5 6 7 8  i ++
 sum :

8     5
8 7 6 5    i--
sum :

8   8
error
*/
#include <iostream>
using namespace std;

int main()
{
    int sp, ep, temp, i;
    int sum = 0;

    cout << "Enter Starting and Ending Position : ";
    cin >> sp >> ep;

    if (sp > ep)
    {
        temp = sp;
        sp = ep;
        ep = temp;
    }

    if (sp == ep)
    {
        cout << "Error : Sum Could not be displayed..";
    }
    else
    {
        i = sp;
        while (i <= ep)
        {
            cout << i << "\t";
            sum += i;   
            i++;
        }
        cout << "\nSum : " << sum;
    }

    return 0;
}