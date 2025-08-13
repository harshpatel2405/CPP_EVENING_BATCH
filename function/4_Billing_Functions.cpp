/*
Task : Write a program to create a Billing System that calculates the final bill amount after applying a discount

If total amount >= ₹5000                    → 20% discount
else If total amount >= ₹3000 and < ₹5000   → 15% discount
else If total amount >= ₹1000 and < ₹3000   → 10% discount
else If total amount < ₹1000                → No discount

!INPUT :
Enter customer name: Harsh
Enter number of items: 4
Enter price of item 1: 1500
Enter price of item 2: 1200
Enter price of item 3: 800
Enter price of item 4: 700

!OUTPUT:
-------------- BILL RECEIPT -------------
Customer Name: Harsh
Total Amount (Before Discount): ₹4200.00
Discount Applied: ₹630.00
Final Amount to Pay: ₹3570.00
----------------------------------------
*/

#include <iostream>
using namespace std;

void getDiscount(float bill)
{
    float discountAmount;
    if (bill >= 5000)
    {
        discountAmount = bill * 0.20;
        bill = bill - discountAmount;
    }
    else if (bill >= 3000 && bill < 5000)
    {
        discountAmount = bill * 0.15;
        bill = bill - discountAmount;
    }
    else if (bill >= 1000 && bill < 3000)
    {
        discountAmount = bill * 0.10;
        bill = bill - discountAmount;
    }
    else if (bill < 1000)
    {
        discountAmount = 0;
        bill = bill - discountAmount;
    }

    cout << "Discount Applied: " << discountAmount << endl;
    cout << "Final Amount to Pay: " << bill;
}

int main()
{
    int nitems, i;
    string name;
    float price;
    float totalPrice = 0;

    cout << "Enter your name : ";
    cin >> name;

    cout << "Enter number of items you bought : ";
    cin >> nitems;

    for (i = 1; i <= nitems; i++)
    {
        cout << "Enter price for Item" << i << " : ";
        cin >> price;

        totalPrice += price;
    }

    cout << "-------------- BILL RECEIPT -------------\n";
    cout << "Customer name : " << name << endl;
    cout << "Total Amount (Before Discount) : " << totalPrice << endl;
    getDiscount(totalPrice);
    cout << "\n----------------------------------------";
    // cout << "\n\nTotalPrice : " << totalPrice;

    return 0;
}