---
title: Payoff Planner
summary: Assignment covering loops
weight: 40
#last used 202030
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to use loops
to solve problems.

## Assignment Instructions

*Submit file: assign4.cpp*  
*I should be able to compile and run your program with:*

    g++ -std=c++11 assign4.cpp -o program.exe
    program.exe       (./program.exe on a mac)

Write a program that will take in the balance on a card, the amount someone will
pay each month (assume constant payments), and the APR on their card (entered as
a percent like: 19.9) - all three values are possibly decimals.

It should print a month by month summary of their payoff schedule like shown below.
Assume that interest is calculated and added to the previous month's balance before
the monthly payment is applied. Your output should show enough lines to completely
pay off the balance. The balance should not go below 0.

{{% sample_run %}}
Enter balance: `1000`
Enter payment: `150`
Enter APR: `19.9`

Month  Int.   Pay       Balance
0             1000.00
1      16.58  150.00    866.58
2      14.37  150.00    730.95
3      12.12  150.00    593.08
4      9.84   150.00    452.91
5      7.51   150.00    310.42
6      5.15   150.00    165.57
7      2.75   150.00    18.32
8      0.30   18.62     0.00
{{% /sample_run %}}

You do NOT have to format the money to print to two decimals. We will learn more about io
formatting next week. If you wish to round to two decimals, you can do the following:

* Include \<iomanip> at the top of your file.
* At the start of your code add this:

        //Force output with fixed decimal, 2 decimal places
        cout << fixed << setprecision(2);

{{% alert info %}}
Do not worry if columns do not line up perfectly. But printing tab characters
with `'\t'` will generally make spacing more consistent than printing multiple
spaces with something like `"       "`.
{{% /alert %}}

### Hints

* Build your way to the final solution - don't even worry about using APR/interest at first.
* Monthly interest rate should be calculated as APR / 12.
