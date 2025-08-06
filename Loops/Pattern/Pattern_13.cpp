/*
Task :    
       *
      * *
     * * * 
    * * * *
   * * * * * 
    * * * *
     * * *
      * *
       * 
*/

#include <iostream>
using namespace std;

int main()
{
    int i , j , k , size;

    cout << "Enter Size of Diamond : ";
    cin >> size;
    for (i = 1; i <= size; i++)
    {
        for(k = 1; k <= size - i; k++)
        {
            cout <<" ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for(i =size-1 ; i >=1 ; i--)
    {
        for(k = 1; k <= size-i ;k++)
        {
            cout <<" ";
        }
        for(j = 1 ; j <= i;j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}