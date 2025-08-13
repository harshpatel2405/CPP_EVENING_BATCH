/*
Task : Write a C program to create a Restaurant Order & Delivery Time Estimator using two functions
       a) calculateTotalBill()  --> Calculates total bill amount
       B) estimateDeliveryTime() --> calculate estimated delievery time based on total bill got from calculateTotalBill() 
                if Bill < ₹500                          → 20 minutes    
                else if Bill >= ₹500 and < ₹1500        → 30 minutes    
                else if Bill >= ₹1500 and < ₹3000       → 45 minutes    
                else if Bill ≥ ₹3000                    → 60 minutes

!PROCESS: 
    . Calculate total bill in calculateTotalBill().
    . Pass the bill to estimateDeliveryTime() to get delivery time.

!INPUT : 
Enter customer name: Amit
Enter number of items: 4
Enter price of item 1: 250
Enter price of item 2: 300
Enter price of item 3: 900
Enter price of item 4: 1500

!OUTPUT:
---------- ORDER SUMMARY ----------
Customer Name: Amit
Total Bill: ₹2950.00
Estimated Delivery Time: 45 minutes
-----------------------------------
*/