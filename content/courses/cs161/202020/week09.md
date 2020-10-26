---
title: Week 9 - Defining Types (Enums, Typedef, and Structs)
linktitle: Week 9

weight: 90
---

## Learning objectives

Upon finishing this learning module, you should be able to:

* Use enums and typedefs to improve code readability and safety
* Use structs to represent heterogeneous collections of data

## Deadlines This Week

* Monday 11:59PM - Assignment 8
* Friday 11:59PM - Enumerations & Structs CPPLab

## Readings & Activities

### Monday
    
* Enums, Typedef & Namespaces
* Do Enum CPPLab
* See Activity outline section below for readings

### Tuesday
    
* Bitflags
* Structs
* Do Struct CPPLab
* See Activity outline section below for readings

### Wednesday
    
* Structs and arrays

### Thursday
    
* Photochop—make sure to unpack the .zip file and open the
  existing project. If you try to open files one at a time they
  will not work. One question on final will involve using the
  Image struct to write a filter that would modify an image.

## Online Activity Outline

{{% alert info %}}
This week we are hitting some topics that are not
covered in the regular part of the book. It is more important than usual
that you check out the code samples in the Classroom slides section.
{{% /alert %}}

### Enums & Typedef

Read [learncpp.com's enum page](http://www.learncpp.com/cpp-tutorial/45-enumerated-types/) and
the book's [online enum supplement](http://liveexample.pearsoncmg.com/liang/cpp/supplement/Supplement4hEnumeratedTypes.pdf)

Read [leancpp.com's Typedef page](http://www.learncpp.com/cpp-tutorial/46-typedefs/)

This video adds a couple important points about enums and typedef's—watch it after reading the pages listed above:  

{{< youtube videoid="ziPqD60GTSU" title="Typedef and Enum" >}}

Do Enums CPPLab

Bit flags are a similar idea to enums—a way to represent multiple
options, but unlike enums, you can have a variable that is the
combination of two values. This video introduces the basic idea:  

{{< youtube videoid="ikAeG7_MuXs" title="Bit Flags" >}}

You can find a [bitflag tutorial here](http://forum.codecall.net/topic/56591-bit-fields-flags-tutorial-with-example/).
You do not need to become an expert with them, but definitely need
to recognize what is going on when you see code like BOLD | ITALIC.

### Structs

Read [learncpp.com's struct page](http://www.learncpp.com/cpp-tutorial/47-structs/)

These videos (and the accompanying slides and example code in the
Classroom Files link) introduce some concepts that are not covered
in the reading:  

{{< youtube videoid="Evra7WBVZTA" title="Struct Basics" >}}
{{< youtube videoid="7mY4_oe9Ga4" title="Structs and Arrays" >}}

Do the structs CPPLab by Friday

### Assignment

Start work on the assignment—this final assignment has a longer
deadline week, but it does require a bit of work to get set up and
going. The FinalExample.cpp from the Structs And Arrays video should be
helpful in figuring out how to structure your data/program—make sure
to get the source code from Classroom files and check it out.

### Photochop

This video introduces the PhotoChop project (see Classroom files
link for project and PDF guide file). It puts together different
concepts from throughout the course and gives you experience going
into a codebase and working with code you did not write (this is
what most software developers spend most of their time doing):  

{{< youtube videoid="fdcLM7_4zLU" title="Photochop" >}}

PhotoChop mini-assignment (turned in through elearn but scored with
CPPLabs) is to make (at least) two new image functions—you should
make one each from two different categories (Create New Image, Basic
Image, Complex Image Modifcation, Moving Pixels, Combining Pixels,
and Multiple Files). Due Friday of week 10.

I will use Photochop as the basis for one question on the final. It
contains a moderately complex structure you should already be
familiar with, meaning I can use it to ask you to write some code
without having to spend a lot of time figuring out a new array I'm
asking you to work with.
