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
    int temp;
    int ld;
    int rev = 0;

    cout << "Enter a number : ";
    cin >> no; // 123

    temp = no;

    while(no != 0)
    {
        ld = no % 10; // 123 % 10 = 3      --- pass 1
                      //  12 % 10 = 2      --- pass 2
                      //   1 % 10 = 1      --- pass 3

        rev = rev * 10 + ld;  //  0 * 10 + 3 = 3     --- pass 1
                              //  3 * 10 + 2 = 32    --- pass 2
                              // 32 * 10 + 1 = 321   --- pass 3

        no /= 10; // 123 / 10 = 12        --- pass 1
                  //  12 / 10 = 1         --- pass 2         
                  //   1 / 10 = 0         --- pass 3
    }

    cout << "Reverse of the number is " << rev;

}