---
title: File List Analysis
summary: Assignment covering file I/O and string functions
---

{{% cs161General %}}

## Objective

Upon completion of this assignment the student will be able to read data
from a file and use string functions to process text.

## Assignment Instructions

*Submit file: assign5.cpp*

Write a program that extracts information from a text file containing
information about images on a website.

Your program should read from a file called "Images.txt" which will
consist of an unknown number of lines. Each line consists of an image
URL (web address), an MD5 hash identifying the image, and a file size in
bytes. Here is what a line might look like:

```
http://smugmug.com/thumbs/Lacus.jpeg?170x330	44cf8edbd53cf75be874604b39a7694c	21990
```

Note that the URL consists of `http://smugmug.com/thumbs/` followed by a
filename (`Lacus.jpeg`) including extension, then a question mark and
the width (`170`) and height (`330`) of the image.

{{% alert warning %}}
Make sure that you read the right input file name.
Capitalization counts!

Do not use a hard-coded path to a particular directory, like `"C:\Stuff\Images.txt"`.
Your code must open a file that is *just* called `"Images.txt"`.

Do not submit the test file; I will use my own.
{{% /alert %}}

Here is a [sample data file](Images.txt) you can use during development.
Note that this file has 5 lines, but when I test your program I will not
use this exact file. You cannot count on there always being exactly 5
images. The file will end with an empty line (like the sample file).
Make sure to test your program with more/fewer lines than 5.

Your program should print out an organized table that for each image
shows: the filename, image type (the file extension), the width, the
height and the size in kB (1024 bytes in a kB) rounded to one decimal
place. It should then display the total size in kB of the images.

### Sample output

```
Name				Type	Width	Height	Size
Lacus.jpeg			jpeg	170	330	21.5
Vel.jpeg			jpeg	300	220	10.4
ElementumNullam.png		png	270	280	58.6
MontesNasceturRidiculus.jpeg	jpeg	180	220	101.5
AtLorem.jpeg			jpeg	200	240	21.6
Total Size:						213.5
```

### Hints

* Remember, my test file will have a different number of lines.
* You should not need to turn strings into numbers, but if you do, here is how to do so:

  ```
  string foo = "123";
  int x = stoi(foo); //convert string to int

  string bar = "123.5";
  double y = stod(bar); //convert string to double
  ```
