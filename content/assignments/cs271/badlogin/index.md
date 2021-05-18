---
title: Bad Login
summary: Find strings in running programs
---

Download the [badlogin program]. It works sort of like the `login`
program that controls access to UNIX systems, except that instead of
actually granting or denying access to anything, it just prints messages,
and also it is terrible.

  [badlogin program]: badlogin.zip

When you run `badlogin`, it will prompt you for a username; use
your actual username from your Chemeketa email (e.g. I would use
`rsurton`). Then, it will prompt you for a password.  Your task is to
figure out what password to enter to get a message saying you have been
granted access. As with the previous assignment, just getting the right
answer isn't enough; I expect you to explain how you found the answer
and include snippets from using gdb to gather evidence.  Put together a
document that includes your username and shows what password will grant
you access, *and how you know*. When you are done, export your document
as PDF and submit it to elearn.

There is another program included in the download, named `extrabadlogin`.
It is not extra bad, so much as it is worth extra because some techniques
that will solve `badlogin` do not work on `extrabadlogin`. You only need
to solve `badlogin` for “Yes” credit, but solving both puzzles with
a good writeup is worth “Wow!” credit.
