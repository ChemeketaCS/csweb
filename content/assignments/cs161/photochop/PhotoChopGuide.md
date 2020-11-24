Background
==========

### Images

We can think of an image as a grid of squares called pixels. Each pixel
has a color value that can be represented as a mix of red, green and
blue. If we allow each of these three color \"channels\" to have a value
of 0-255 or 8 bits of storage, the color of one pixel can be represented
with 24 total bits (allowing for 2^24^ or over 16.7million different
colors).

If all three colors have the same value we get a shade of gray, ranging
from 0/0/0 (black to 255/255/255 (white). If the three color values are
different, we will get a shade determined by the three values. The table
below shows some examples.

+-------+---------------+---------------+---------------+-------------+---------+
|       | **0**         | **1**         | **2**         | **3**       | **4**   |
+=======+===============+===============+===============+=============+=========+
| **0** | **Red: 255\   | **Red: 0\     | **Red: 0\     | **Red: 255\ | **...** |
|       | Green: 255**  | Green: 255**  | Green: 0**    | Green: 0**  |         |
|       |               |               |               |             |         |
|       | **Blue: 255** | **Blue: 0**   | **Blue: 255** | **Blue: 0** |         |
+-------+---------------+---------------+---------------+-------------+---------+
| **1** | **Red: 255\   | **Red: 215\   | **Red: 200\   | **Red: 0\   | **...** |
|       | Green: 255**  | Green: 215**  | Green: 150**  | Green: 0**  |         |
|       |               |               |               |             |         |
|       | **Blue: 0**   | **Blue: 215** | **Blue: 255** | **Blue: 0** |         |
+-------+---------------+---------------+---------------+-------------+---------+
| **2** | **...**       | **...**       | **...**       | **...**     | **...** |
+-------+---------------+---------------+---------------+-------------+---------+

Code
====

Open the PhotoChop.pro project file in QTCreator to build/run the
project.

**ImageIOLib.h/.cpp are blackbox code -- you do not have to worry about
how they work at all**

**Image.h** declares our data types and some constants for working with
images

-   **byte** is typedefed as a new name for **unsigned char** -- the
    built in type that can store 0-255

> typedef unsigned char byte;

-   A Pixel is a struct that holds three of those values:

> struct Pixel {
>
> byte red;
>
> byte green;
>
> byte blue;
>
> };

-   An Image is a struct that consists of a 2-dimensional array of
    Pixels.

> struct Image {
>
> Pixel data\[IMG\_HEIGHT\]\[IMG\_WIDTH\];
>
> };

It uses dimensions based on these constants:

> const int IMG\_HEIGHT = 128;
>
> const int IMG\_WIDTH = 128;

**main.cpp** has code to create some images, as well as to load an image
and modify it. Use the existing code as a model for how to write your
own functions that do similar work. Note that you do not have to
understand the code behind displayImage( ). Just use it to show the
results of any work that you do by passing your image, a string and the
**mainLayout** to it.

Assignment
==========

Make **two** or more functions that create or modify an existing image
using the PhotoChop code. You must make your functions from different
categories listed under Function Ideas sections below (you can't do two
"Create New Image" functions). Feel free to invent your own ideas or
modify the existing ones.

### Function Ideas

***Create New Image*** -- *use makeAqua / make Gradient as samples*

+-----------------------------------+-----------------------------------+
| ![](media/image1.png){width="0.50 | ***Circle Gradient***             |
| 90277777777777in"                 |                                   |
| height="0.5090277777777777in"}*** | ![](media/image2.png){width="0.62 |
| Box***                            | 22222222222222in"                 |
|                                   | height="0.6222222222222222in"}Cal |
| Write a function that takes in    | culate                            |
| parameters for starting row, col  | each pixels RGB values based on   |
| and width and height. It then     | the distance from the center of   |
| uses those values to draw a white | the image. Set each pixel to a    |
| box (or whatever color you like)  | gray value (same RGBs) based on   |
| on a black background.            | pixel's distance from center.     |
+===================================+===================================+
| ![](media/image3.png){width="0.60 | ***Snow***                        |
| 34722222222222in"                 |                                   |
| height="0.6034722222222222in"}*** | For each pixel in a new image,    |
| Color                             | pick a random number from 0-255   |
| Gradient***                       | and use that for all three color  |
|                                   | values.                           |
| Blend from one color to another.  |                                   |
+-----------------------------------+-----------------------------------+

***Basic Image Modifying*** -- *use RedFilter as a model to get started*

+-----------------------------------+-----------------------------------+
| ![](media/image4.png){width="0.61 | ![](media/image5.png){width="0.61 |
| 73611111111111in"                 | 73611111111111in"                 |
| height="0.6173611111111111in"}*** | height="0.6173611111111111in"}*** |
| OnlyRed                           | Invert***                         |
| ***                               |                                   |
|                                   | Set each color to be (255 -- the  |
| Set the blue and green value for  | original value).                  |
| each picture to be 0.             |                                   |
+===================================+===================================+
| ![](media/image6.png){width="0.64 | ***Darken** or **Lighten***       |
| 30555555555556in"                 |                                   |
| height="0.6430555555555556in"}*** | Multiply the red, green and blue  |
| GrayscaleRed                      | values each by a value. A value   |
| ***                               | between 0 and 1 will darken the   |
|                                   | image; a value \> 1 will brighten |
| Set the blue and green values for | the image.                        |
| each pixel equal to their red     |                                   |
| value. *(Or set red and blue = to |                                   |
| green OR set all three to the     |                                   |
| average of their values; each of  |                                   |
| those recipees produces a         |                                   |
| different grayscale image.)*      |                                   |
+-----------------------------------+-----------------------------------+
| ***BlueScreen***                  | ***Noise***                       |
|                                   |                                   |
| Identify any pixel where the blue | For each color of each pixel,     |
| value is higher than the red      | pick a random number from -20 to  |
| value. Turn those pixels to white | 20 and add it to the color value. |
| (255,255,255). You should be able |                                   |
| to clear most of the background.  |                                   |
+-----------------------------------+-----------------------------------+
| ***CropCenter***                  |                                   |
|                                   |                                   |
| ![](media/image7.png){width="0.94 |                                   |
| 02777777777778in"                 |                                   |
| height="0.9472222222222222in"}Mak |                                   |
| e                                 |                                   |
| a black or dark border around the |                                   |
| edge of the image, only leaving   |                                   |
| the middle visible.               |                                   |
+-----------------------------------+-----------------------------------+

***Moving Pixels*** -- *use rotate as a model to get started*

+-----------------------------------+-----------------------------------+
| ***Flip vertical or horizontal*** | ***Rotate left***                 |
|                                   |                                   |
| Flip the image in one dimension   | Make a rotation that goes the     |
| or the other. (left-right or      | other direction.                  |
| up-down).                         |                                   |
+-----------------------------------+-----------------------------------+

***Continues...***

***Combining Pixels*** -- *use blurFilter as a model to get started*

+-----------------------------------+-----------------------------------+
|          -1\*                     | ***FindEdges***                   |
|   ------ ------ ------            |                                   |
|   -1\*   5\*    -1\*              | If you do a sharpen filter but    |
|          -1\*                     | make the current pixel multiplier |
|                                   | value 4 instead of 5, (so that    |
| ***Sharpen***                     | the 5 cells values add to 0) it   |
|                                   | will do a find edges type filter  |
| Multiply the current pixel's RGB  | that shows solid areas of color   |
| values by 5 and neighboring       | as black and areas with sharp     |
| values by -1. Add them all up --  | changes as bright.                |
| this is the new value.            |                                   |
|                                   |                                   |
| Using -2 and 9 makes for a        |                                   |
| stronger effect. Just make sure   |                                   |
| the values for the 5 cells add to |                                   |
| 1.                                |                                   |
|                                   |                                   |
| ![](media/image8.png){width="0.72 |                                   |
| 98611111111111in"                 |                                   |
| height="0.7298611111111111in"}Sub |                                   |
| tracting                          |                                   |
| the neighboring pixels will       |                                   |
| enhance any color differences,    |                                   |
| making color transitions look     |                                   |
| more abrupt and thus "sharper"    |                                   |
+===================================+===================================+
| ***8-BitLook***                   | ***Stretch***                     |
|                                   |                                   |
| Copy pixels that are on an even   | Make each pixel take up 4x more   |
| row and column into their \"odd   | space. Unlike 8-Bit, this one     |
| numbered\" neighbors - note odd   | should not skip rows/columns from |
| numbered rows and columns from    | the original image. However,      |
| original are not used.            | because the image must stay the   |
|                                   | same size, you will only be able  |
|   A   B   C   D   Becomes:   A    | to stretch the upper left         |
| A   C   C                         | quadrant of the image.            |
|   --- --- --- --- ---------- ---  |                                   |
| --- --- --- ---                   |   A   B   C   D   Becomes:   A    |
|   D   E   F   G                   | A   B   B                         |
| A   A   C   C                     |   --- --- --- --- ---------- ---  |
|   H   I   J   K                   | --- --- --- ---                   |
| H   H   J   J                     |   D   E   F   G                   |
|   L   M   N   O                   | A   A   B   B                     |
| H   H   J   J                     |   H   I   J   K                   |
|                                   | D   D   E   E                     |
|                                   |   L   M   N   O                   |
|                                   | D   D   E   E                     |
|                                   |                                   |
|                                   | *Hint: Make sure you don't go too |
|                                   | far in the source image or you    |
|                                   | will end up writing off the edge  |
|                                   | of the Image's array. That data   |
|                                   | will "wrap" to the next row and   |
|                                   | produce weird results.*           |
+-----------------------------------+-----------------------------------+

***Multiple Files*** --

You can open multiple files by making multiple Image structs and doing
multiple readImage calls.

+-----------------------------------+-----------------------------------+
| ***Merge***                       | ***Secret Message***              |
|                                   |                                   |
| Read in two separate images.      | I hid a secret message in         |
| Write a function that averages    | crabMessage.bmp. Compare the      |
| the values of corresponding       | pixels in it to the pixels in     |
| pixels to create a new image. Or  | crab.bmp. If corresponding pixels |
| use the top half of one and the   | have different green values, turn |
| bottom of anther. Or alternate    | that pixel white. Otherwise, turn |
| lines. Or blend so that you use   | it black.                         |
| 100% of one image at the top,     |                                   |
| 100% of the other at the bottom   | [*http://en.wikipedia.org/wiki/St |
| and gradually shift the           | eganography*](http://en.wikipedia |
| weights...                        | .org/wiki/Steganography)          |
+-----------------------------------+-----------------------------------+

Appendix: (Optional extra info)
===============================

### Binary Files - Background

Data files are often stored in binary format. It is much more compact to
store the number 200000 as a 32-bit integer instead of as 6 characters
(each of which take 16-bits to store). It is also faster to read in
those raw bits instead of reading strings and converting those to
integers.

To read the files humans usually use a hex editor - which shows each
byte of the file as a character:

![](media/image9.png){width="6.0in" height="1.6145833333333333in"}

**File formats** specify how a particular kind of file is to be written
- how to interpret the 1\'s and 0\'s. Below is a simplified description
of the file format for .bmp (bitmap) image files. *(The full format for
.bmp image files can be found at:
<http://en.wikipedia.org/wiki/BMP_file_format> )*

  Byte Address   Description                                                       Sample value from above screen shot
  -------------- ----------------------------------------------------------------- --------------------------------------------------------------------------------------------------------------------------------------------
  0              Magic Number - verifies really is bmp data - always 66 (42 hex)   42 hex (66 in decimal) - represents character \'B\'
  1              Magic Number - verifies really is bmp data - always 77 (4d hex)   4d hex (77 in decimal) - represents character \'M\'
  10             Byte address image data starts                                    Look in column 10 in the first row. The value is 36hex or 54 in decimal. The image data starts at byte \#54.
  18             Width of bitmap                                                   Find the 19^th^ byte (address 18) - it is the third one in the second row. The value of 80 means the width is 80 in hex or 128 in decimal.
  22             Height of bitmap                                                  The height (also 80 hex/128 decimal) can be seen in byte \#22 (halfway across second row).

*Notes: in the full file format, there are other pieces of information
that are stored at other addresses - this is just a sample of what is
there. Also, the width and height are stored as a 32-bit integers (not
just as one byte).*

The ImageIOLib functions do the work of parsing the file and reading the
image part of the data into an array.

Your own pictures:
------------------

Open the image you want to use in paint / photoshop, etc....

Save as bmp:

![](media/image10.png){width="1.828571741032371in" height="0.4in"}

If you have options, use 24 bit color.

![](media/image11.png){width="1.734828302712161in"
height="2.0521741032370953in"}

Make sure to modify the constants in ImageIOLib.h to match the new
sizes.
