---
title: Future Value
summary: Assignment covering loops
weight: 40
#last used 202020
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

Write a program that will print a table showing how fast someone's
retirement will grow. It should take as input how much they will invest
each month, the interest rate they expect to get (expressed as a an
annual percentage) and the number of years they will be investing the
money for.

Assume that interest is calculated and added to the previous balance at
the start of each month, then the new investment is added to that.

### Sample run

{{% sample_run %}}
Enter monthly investment: `100`
Enter APR: `7.25`
Enter number of years: `15`

Year\# / Month\# / Balance
1 / 1 / 100.00
1 / 2 / 200.58
1 / 3 / 301.76
\...
1 / 12 / 1239.37
2 / 1 / 1346.62
\...
15 / 12 / 31750.54
{{% /sample_run %}}
{{% alert info %}}
Don't worry about making the columns all lined up and pretty.
If you like, you can print `\t` characters (tabs) to help line things up.
{{% /alert %}}

### Hints

Build your way to the final solution. First just worry about years.  Then months. Then money...

You do not have to print the money to two decimal places (we will learn
about output formatting next week) but if you want to, include
`<iomanip>` library and add this to the start of your main function:

```
//Force output with fixed decimal, 2 decimal places
cout << fixed << setprecision(2);
```

To calculate the monthly interest rate, do the following:

1.  Convert the APR from a percentage to a decimal (7.25 would become .0725)
2.  Add it to 1 to get a multiplier that would produce the right annual multiplier (1.0725)
3.  Take this yearly multiplier and raise it to the 1/12th power (1.0725 would become \~1.00584974)
4.  This is the correct multiplier to use on a monthly basis to get the right annual interest rate.
