---
title: Web Log Parser
summary: Assignment covering file I/O and string functions
weight: 50
#last used 202030
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to read data
from a file and use string functions to process text.

## Assignment Instructions

*Submit file: assign5.cpp*  
*I should be able to compile and run your program with:*

    g++ -std=c++11 assign5.cpp -o program.exe
    program.exe       (./program.exe on a mac)

Your task is to write a program that parses the log of visits to a website to extract some
information about the visitors. Your program should read from a file called **WebLog.txt**
which will consist of an unknown number of lines. Each line consists of the following pieces
of data separated by tabs:

    IPAddress  Username  Date  Time  Minutes

Where Date is in the format d-Mon-yy (day, Month as three letters, then year as two digits)
and time is listed in 24-hour time.

Read in the entire file and **print out each record from April** (do not print records from
other months) in the format:

    username   m/d/yy   hour:minuteAM/PM   duration

Where mm/dd/yy is a date in the format month number, day number, year and the time is listed in
12-hour time (with AM/PM).

For example, the record:
{{% sample_run  %}}
82.85.127.184  dgounin4  19-Apr-18  13:26:16    13
{{% /sample_run  %}}

Should be printed as something like:
{{% sample_run  %}}
dgounin4   04/19/18   1:26PM     13
{{% /sample_run  %}}

{{% alert warning %}}
Make sure that you read the right input file name.
Capitalization counts!

Do not use a hard-coded path to a particular directory, like `"C:\Stuff\WebLog.txt"`.
Your code must open a file that is *just* called `"WebLog.txt"`.

Do not submit the test file; I will use my own.
{{% /alert %}}

Here is a [sample data file](WebLog.txt) you can use during development.
Note that this file has 100 lines, but when I test your program, I will not use this exact
file. You cannot count on there always being exactly 100 records.

### Hints

* Remember, my test file will have a different number of lines.
* Start small! Making sure your program works correctly on 1 line, or three
lines is a lot easier than 100.
* You should not need to turn strings into numbers, but if you do, here is how to do so:

  ```
  string foo = "123";
  int x = stoi(foo); //convert string to int

  string bar = "123.5";
  double y = stod(bar); //convert string to double
  ```
