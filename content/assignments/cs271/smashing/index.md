---
title: Smashing the stack
summary: Smashing the stack for fun and learning
---

Download the access control program named, appropriately enough,
[vulnerable](vulnerable). Like the other programs we've been experimenting
with, it doesn't actually grant access to anything, it just prints
messages. Unlike the other programs we've been experimenting with,
it chooses a random password every time it runs, so there is no way to
gain access other than by astronomically good luck.

Or is there…

The program is compiled from C code that looks like this:

``` C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 16

void choosepassword(char secret[SIZE]) {
	int i;
	for (i = 0; i < SIZE - 1; ++i)
		secret[i] = 'a' + (rand() % 26);
	secret[i] = '\0';
	return;
}

int checkpassword(void) {
	char secret[SIZE];
	char input[SIZE];

	choosepassword(secret);
	gets(input);

	return strcmp(input, secret) == 0;
}

int main() {
	srand(time(0));
	if (checkpassword())
		printf("Access granted!\n");
	else
		printf("ACCESS DENIED\n");
	return 0;
}

void donotcallthisfunction(void) {
	printf("Something strange is going on...\n");
	exit(EXIT_FAILURE);
}
```

The critical function is `checkpassword`, which reads in the password
using the notorious `gets` (get string) library function. Nobody uses
`gets` anymore, and in fact I got a lot of warnings when I compiled
this code for you, because it is vulnerable to a buffer overflow attack.
You might find the following resources helpful for understanding what's
going on with this kind of attack.

* [Smashing the stack for fun and profit], by Aleph One. This is the
  original tutorial on stack smashing, published in the infamous Phrack
  Magazine in 1996.
* [Smashing the Stack For Fun and Profit (Today)], a 2016 article
  revisiting the classic in light of modern defenses. You don't have
  to worry, because I have already disabled all of the defenses on
  poor `vulnerable`, but it's a good summary of the sorts of defenses
  there are.
* [Stack-Based Buffer Overflow Attacks: Explained and Examples], which has
  code that inspired the particular vulnerability in our example, along
  with some additional details about how it works and how to exploit it.
* [Stack frames], for review about how the critical information is
  stored on the stack.
* [Tenouk's buffer overflow tutorial], an incredibly long and detailed deep
  dive on the topic of buffer overflows in C and C++, including a lot of
  information that overlaps with other topics we've covered in this class.

  [Smashing the stack for fun and profit]: http://phrack.org/issues/49/14.html
  [Smashing the Stack For Fun and Profit (Today)]: https://travisf.net/smashing-the-stack-today
  [Stack-Based Buffer Overflow Attacks: Explained and Examples]: https://www.rapid7.com/blog/post/2019/02/19/stack-based-buffer-overflow-attacks-what-you-need-to-know/
  [Stack frames]: https://www.cs.rutgers.edu/~pxk/419/notes/frames.html
  [Tenouk's buffer overflow tutorial]: https://www.tenouk.com/cncplusplusbufferoverflow.html

To satisfy this assignment, I want you to produce two exploits and
then write up how you designed them. An exploit is a file that can be
provided as input to the vulnerable program with the result of changing
its behavior.  I like to use `xxd -r -p` to convert hexadecimal into raw
binary files to generate exploits; it's also quite common to use Python
or other languages to make short programs that output the exploit. If
you've generated your exploit in a file named `exploit`, you can feed
it into `vulnerable` using shell redirection.

```
./vulnerable < exploit
```

The first exploit should overwrite the buffer to replace the secret
with one you can control, causing the program to print “Access
granted!” and exit normally. Call that exploit file `smashsecret`
when you submit it.

The second exploit should overwrite the saved return address so that
`checkpassword` returns to `donotcallthisfunction` instead of `main`,
causing the program to print “Something strange is going on...” and
exit. Call that exploit file `smashreturn` when you submit it.

If you cannot get one or both of those exploits working, submit any input
that causes `vulnerable` to crash, e.g. with a segmentation fault, for
partial credit.  Conversely, there are numerous variations on this sort of
attack; if you want to go the extra mile, consider embedding machine code
in the exploit itself and overwriting the return address to execute your
injected code. Or, you could look into return-oriented programming (ROP).

In addition to your exploit files, submit a writeup in PDF format
explaining how you found the information you needed and how you generated
and tested the exploits.

Have fun smashing the stack!
