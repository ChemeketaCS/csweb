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
information about the visitors. Your program should read from a file called [WebLog.txt](WebLog.txt)
which will consist of an unknown number of lines. Each line consists of the following pieces
of data separated by tabs:

    IPAddress  Username  Date  Time  Minutes

Where **Date** is in the format d-Mon-yy (day, Month as three letters, then year as two digits)
and **Time** is listed in 24-hour time.

Read in the entire file and **print out each record from April** (do not print records from
other months) in the format:

    username   m/d/yy   hour:minuteAM/PM   duration

Where m/d/yy is a date in the format month number, day number, year and the time is listed in
12-hour time (with AM/PM).

For example, the record:
{{% sample_run  %}}
82.85.127.184      dgounin4  19-Apr-18  13:26:16    13
{{% /sample_run  %}}

Should be printed as something like:
{{% sample_run  %}}
dgounin4           4/19/18   1:26PM      13
{{% /sample_run  %}}

At the top of the output, you should label the columns and the columns of data on each row
should be lined up nicely. Your final output should look something like:
{{% sample_run  %}}
Name               Date      Time        Minutes
chardwick0         4/9/18    5:54PM      1
dgounin4           4/19/18   1:26PM      13
cbridgewaterb      4/2/18    2:24AM      5
...(rest of April records)
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

* Start small! Making sure your program works correctly on one line is a lot easier than 100.

* Remember, my test file will have a different number of lines.

* You can read in something like `13:26:16` all as one big string, or as an int, a char (:), 
an int, a char (:), and another int.

* If you need to turn a string into an int or a double, you can use this method:

  ```
  string foo = "123";
  int x = stoi(foo); //convert string to int

  string bar = "123.5";
  double y = stod(bar); //convert string to double
  ```
