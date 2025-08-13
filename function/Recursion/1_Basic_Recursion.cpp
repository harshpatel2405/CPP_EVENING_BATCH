/*
Task : print addition of 1 to 10 using recursion
*/

#include <iostream>
using namespace std;

int add(int no)
{
    if(no == 1)
    {
        return 1;
    }// back / backup condition
    return no + add(no - 1);

    // [
    //     1) 3 + add(2)   
    //             1) 2 + add(1)
    //                     1) 1

    //     1) 3 + 3   
    //             1) 2 + 1
    //                     1) 1
    // ]
}

int main()
{
    cout << add(3);
    return 0;
}