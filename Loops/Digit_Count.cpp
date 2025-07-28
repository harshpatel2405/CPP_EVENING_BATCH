#include<iostream>
using namespace std;


//1234   --> 4

int main()
{
    int no;
    int count = 0;
    int temp;

    cout << "Enter a number : ";
    cin >> no; // 123

    temp = no;

    for(;no != 0;no /= 10)
    {
                   // 123 / 10 = 12
                   //  12 / 10 = 1
                   //   1 / 10 = 0
        count++;
    }

    cout << "Number of digits in " << temp << " is " << count; 

}