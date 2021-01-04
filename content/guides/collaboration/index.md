---
title: Collaboration vs. Plagiarism
summary: On getting and giving help
---

Humans do not stand alone. In programming, as in other arts, we do
better work and learn more when we communicate and cooperate. There are
two easy ways to get this wrong: isolation, working without the benefit
of others, and plagiarism, copying the work of others as a way to avoid
your own work.

## General advice

The most concrete way to avoid plagiarism is citation.
Accounting for your influences and giving them credit is an
important part of building an academic culture. Academics expect
to be able to follow trails of citations through the development
of an idea or field, learning about their own foundations
and history. Admitting that you [stand on the shoulders of
giants](https://en.wikipedia.org/wiki/Standing_on_the_shoulders_of_giants)
does not make you seem smaller; it adds prestige to the sources you cite
and gives other people more confidence in your work.

Citation is necessary but not sufficient. You can copy from a
source and give a complete and useful citation, but if you add
nothing of your own, you are not collaborating. You might have
heard a quote to the effect that good artists copy, while great
artists steal. It is interesting to follow the [history of that
quote](https://quoteinvestigator.com/2013/03/06/artists-steal/), because
ironically its attribution has been very confused. This seems to be the
version to refer to:

> Immature poets imitate; mature poets steal; bad poets deface what they
> take, and good poets make it into something better, or at least something
> different. The good poet welds his theft into a whole of feeling which is
> unique, utterly different than that from which it is torn. —TS Eliot

One of the best ways to ensure that your work is unique and utterly
different is to allow nothing of the source to move directly into your
work. It is tempting to copy directly from a source into your own
workspace and then tweak it and add to it until it is yours, but that
is difficult to get right. Instead, absorb what you learn into your
own thoughts and practices, set everything aside, and do your final
work alone.

## Getting and giving help

In a class setting, the teacher occupies a privileged position, as do
teaching assistants, tutors, and other such helpers. You can share
your code with them and go over it in detail without worrying about
plagiarism. Another student who will be graded separately for their own
work should not see yours, and vice versa. So how can you collaborate?

### Talk general strategy

As a question: “Hey, I know I need to chop up this string; what
functions can I use to do that?”

While giving advice: “I found I had to use two loops to solve that problem.”

### Point someone to examples from the class, book, or other material

“Oh, you should check chapter 5.8—it shows how to do that.” or “I used
the StructSample project as a starting point for this project.”

### Create your own example

Make up examples using snippets of code not directly related to the
assignment. If someone asks “How do you know if `string.find()` can't
find what you are looking for?”, you might answer:

> It returns the special value `string::npos`, like this:
>
> ```
> string foo = "something";
> if(foo.find("q") == string::npos)
>     //it is not there
> ```

### Isolate a snippet

If you are debugging a syntax error on one line of code, it is
reasonable to share that line of code by itself. For example:

> Why does this line of code give me an error that says "expression is not
> assignable"?
>
> ```   
> 4 = x;
> ```

### Answer with a question

When offering help, think about what you can say that will actually be
helpful.  Imagine watching someone struggling to solve a puzzle or win
a game that you have already solved or won. If you tell them nothing,
you are not helping, but if you just tell them the solution, you have
robbed them of their chance to solve the problem. Can you ask them a
question that leads in the right direction?

Inventing that kind of advice is difficult, and it is a skill like any
other that must be practiced for you to become good at it. Play it safe
and stay on the side of not saying enough, rather than saying too much.

A useful book on this subject is George Pólya's *How to
Solve It*, which is primarily about [good questions to guide someone](How%20to%20solve%20it.pdf)
(perhaps yourself) through solving
a problem, in a way that allows them to construct their own solution
and learn from what they have done.

## Sharing work

Sometimes, the only way to see what is wrong with some code is to see
the whole system and debug it in a live format (e.g. face-to-face or
screensharing). Sometimes, students are assigned to work together
in groups, and it is important for each member to contribute their
own effort. Collaborating in this context is difficult to get right,
and if you don't feel confident in your ability to know or follow
acceptable standards while working in this way, it is safest to stick to
the strategies described already, or to ask for help from a privileged
person such as the teacher.

As a person whose code is being shared, beware of how your code will
influence the person you are allowing to see it. If they plagiarize by
copying from you, you will also be held responsible.

As a person who is looking at someone else's code, guide them through
their own process of tracking down what is wrong, rather than telling
them how to fix it. Although being trusted with seeing their code might
help you see the solution, if you can't guide them toward it using
the strategies above, that is a sign they have bitten off too much at
once. They might not understand what they have done so far. Encourage
them to backtrack and focus on a smaller, simpler chunk of work—for
example, to find the first line of code that goes wrong.

## Learning from example work

When you are not interacting with another person, but you come across a
source that seems to offer a solution, you face yet another challenge.
How can you use it without having the interactivity to control what you
are told, or benefit from someone who can guide you without giving away
the whole solution?

This case is similar to [reverse engineering](https://en.wikipedia.org/wiki/Reverse_engineering).
Experiment with the solution you found by trying it out. Change or
adapt it as you need to, and try it again. Learn what you need to learn
from it; asking the questions from Pólya's fourth step (“examine the
solution…”) can be useful. Record where you found it, for the sake
of citation.

Finally, set it aside. Do not look at the example *at all* while doing
your final work. If you have learned from it the right knowledge and
skills, you will be able to proceed on your own. If not, go back to all
of your sources and learn more, or ask for help from a privileged person
such as the teacher.

## Conclusions

Collaboration is a major theme of computing—after all, what is
programming, other than explaining to a computer how to solve a problem,
and leveraging its help in turn?  Practice giving good advice without
giving away the solution, and, when in doubt, ask for help!

(You are allowed to ask for help about how to get and give help!)
