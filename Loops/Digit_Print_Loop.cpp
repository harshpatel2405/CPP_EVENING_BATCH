#include<iostream>
using namespace std;


//1234   --> 4
/*
4 
3
2
1
*/

int main()
{
    int no;
    int count = 0;
    int temp;
    int ld;
    int sum = 0;
    int mul = 1;

    cout << "Enter a number : ";
    cin >> no; // 123

    temp = no;

    while(no != 0)
    {
        ld = no % 10; // 123 % 10 = 3
        sum += ld;
        mul *= ld;
        cout << ld;
        count++;
        no /= 10;
    }

    cout << "\n\nNumber of digits in " << temp << " is " << count << endl; 
    cout << "Sum Of Digits : " << sum << endl;
    cout << "Multiplication Of Digits : " << mul << endl;


}