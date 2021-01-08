---
title: Shopping
summary: Assignment covering conditionals

weight: 20
#last used 202030
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to use
conditional structures to make complex decisions in code.

## Assignment Instructions

*Submit file: assign2.cpp*

Barbarian.com is a web superstore with complex rules for calculating shipping
costs based on whether a product is shipped same day via drone, 2-day express
or standard delivery, and the cost of the order:

<style>
table {max-width: 600px; display: table; }
td {width: 50%}
</style>

### Drone Delivery:

|     Cost of Order      |     Shipping Charge      |
|-  |-  |
|     Under $100      |     Not available      |
|     At least $100 but less than $500      |     $50      |
|     $500 or more      |     10% of the cost of order      |

### 2-Day Delivery:

|     Cost of Order      |     Shipping Charge      |
|-  |-  |
|     $300 or less      |     $10 + 2% of the cost of order     |
|     Over $300      |     Free      |

### Standard Delivery:

|     Cost of Order      |     Shipping Charge      |
|-  |-  |
|     Under $35      |     $5      |
|     At least $35 but less than $100      |     $8      |
|     $100 or more      |     Free      |

Write a program that reads in the cost of an order (possibly a decimal like 48.99) and
the shipping method as a number (1 for Drone, 2 for 2-Day and 3 for Standard) and prints
out the total cost of the order + shipping.

If the user enters a negative cost or a different shipping method, print out *"Bad Input"*
(do not ask for new input). If they pick Drone with an order under $100 you should just
print *"Not available"*.

You do not have to worry about rounding cents off properly. We will learn the best way
to do this soon. But given a `double money`, you can use something like this to round
to two places:

    double rounded = static_cast<int>(money * 100) / 100.0;

{{% alert info %}}
You do not have to define constants for all the "magic numbers" in this program, but it
would be good practice.
{{% /alert %}}

### Sample run 1: (user input in red)
{{% sample_run %}}
Enter the cost of your order: `800`
Enter your shipping method: `1`  
Total is $880
{{% /sample_run %}}

### Sample run 2: (user input in red)
{{% sample_run %}}
Enter the cost of your order: `50`
Enter your shipping method: `1`  
Not available
{{% /sample_run %}}

### Sample run 3: (user input in red)
{{% sample_run %}}
Enter the cost of your order: `50`
Enter your shipping method: `2`  
Total is $61
{{% /sample_run %}}

### Sample run 4: (user input in red)
{{% sample_run %}}
Enter the cost of your order: `150.25`
Enter your shipping method: `3`  
Total is $150.25
{{% /sample_run %}}

### Sample run 5: (user input in red)
{{% sample_run %}}
Enter the cost of your order: `150.25`
Enter your shipping method: `8`  
Bad Input
{{% /sample_run %}}
