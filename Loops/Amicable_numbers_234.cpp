/*
Task :  Find pair of numbers are amicable numbers..between 1 and 5



1   1    2    1
1   2    2   2
1  3     2    2
1   4    2   4
1   5


220 a  --> 284  sumA
284 b  --> 220  sumB

a == sumB  && b == sumA
*/

#include <iostream>
using namespace std;

int main()
{
    int a , b;
    int sumA = 0, sumB = 0;

    cout <<  "Enter Two Numbers : ";
    cin >> a >> b;

    for(int i = 1 ; i <= a / 2 ; i++)
    {
        if(a % i == 0)
        {
            sumA += i;
        }
    }

    for(int i = 1 ; i <= b / 2 ; i++)
    {
        if(b % i == 0)
        {
            sumB += i;
        }
    }

    if(a == sumB  && b == sumA)
    {
        cout << a << " and " << b << " are amicabe numbers..";
    }
    else 
    {   
        cout << a << " and " << b << " are not amicabe numbers..";
    }

    return 0;
}