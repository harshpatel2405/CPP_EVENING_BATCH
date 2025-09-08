    /*
    Task : Find pairs of amicable numbers between 1 and 1000
    */

    #include <iostream>
    using namespace std;

    int main()
    {
        int a , b;
        int i , j ,k ,m;
        int sumA = 0 , sumB = 0;
        cout << "Amicable Numbers between 1 and 2500 are: " << endl;
        for(i = 1 ; i < 2500 ; i++)
        {
            a = i;
            sumA = 0;
            for(j = 1 ; j <= a / 2 ;j++)
            {
                if(a % j == 0)
                {
                    sumA += j;
                }
            }
            for(k = 1;k < 2500 ; k++)
            {
                b = k;
                sumB = 0;
                for(m = 1; m <= b / 2 ;m++)
                {
                    if(b % m == 0)
                    {
                        sumB+=m;
                    }
                }
                if(a == sumB && b == sumA)
                {
                    cout << a << " and " << b << endl;
                }
            }

        }
        return 0;
    }
