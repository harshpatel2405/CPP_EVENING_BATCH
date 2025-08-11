// 
// Task :  Count digits of a number using a function.
        // Debug : using no return Type
 

// #include <iostream>
// using namespace std;

// void countDigits(int number)  // formal parameters
// {
//     int count = 0;
//     cout << "Digits in " << number << " are ";
//     while(number > 0)
//     {
//         number /= 10;
//         count++;
//     }
//     cout << count<< endl;
// }

// int main()
// {
//     int no;

//     cout <<"Enter a number : ";
//     cin >> no;

//     countDigits(no); // actual Parameters

//     countDigits(15698);
//     countDigits(1128);
//     countDigits(123);
//     return 0;
// }



//Task :  Count digits of a number using a function.
        //Debug : using no return Type
 


#include <iostream>
using namespace std;

int countDigits(int number)  // formal parameters
{
    int count = 0;
    while(number > 0)
    {
        number /= 10;
        count++;
    }
    return count;
    
}

int main()
{
    int no , s;

    cout <<"Enter a number : ";
    cin >> no;

    s = countDigits(no); // actual Parameters
    cout << "Digits in " << no << " are " << s;

    return 0;
}