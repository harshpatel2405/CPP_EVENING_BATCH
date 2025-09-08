#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    double balance;

public:
    void SetAccountDetail(int acNo, string nm, double bn)
    {
        accountNumber = acNo;
        name = nm;
        balance = bn;
        cout << "Data has been set successfully..." << endl;
    }
    void deposit(int amount)
    {
        balance += amount;
        cout << "Amount " << amount << " Added Successfully.." << endl;
    }

    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount " << amount << " Withdrawn Successfully.." << endl;
        }
        else
        {
            cout << "Amount should not be greater than balance.." << endl;
        }
    }

    void display()
    {
        cout << "Current Balance : " << balance << endl;
    }
};

int main()
{
    BankAccount ba;
    int acno;

    cout << "Enter Account Number : ";
    cin >> acno;

    ba.SetAccountDetail(acno, "Divy Patel", 25000);
    ba.deposit(12000);
    ba.display();
    ba.withdraw(15000);
    ba.display();
    return 0;
}