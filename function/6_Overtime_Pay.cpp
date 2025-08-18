/*
Task : Calculate overtime pay using a separate function.
Normal working hours = 40 hours/week

!INPUT
Enter hours worked: 45
Enter hourly rate: 100

!OUTPUT
(5 * (100)*1.5)
Overtime Pay = ₹750
Total Payment = ₹4750
*/
#include <iostream>
using namespace std;

float OvertimePay(int eh, int hp)
{
    return eh * (hp * 1.5);
}

int main()
{
    int twh, hw, hp;
    float Salary;

    cout << "Enter Normal Working hours/week : ";
    cin >> twh;

    cout << "Enter Hours you have worked : ";
    cin >> hw;

    cout << "Enter Hourly Rate : ";
    cin >> hp;

    if (hw > twh)
    {
        int extra_hours = hw - twh;

        int result = OvertimePay(extra_hours, hp);

        Salary = twh * hp + result;
        cout << "Overtime Amount : " << result << endl;
    }
    else
    {
        Salary = hw * hp;
    }
    cout << "Total Salary : " << Salary;
    return 0;
}
