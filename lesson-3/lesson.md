# Lesson 3 - loops

While we can do a lot with conditional statements, we will need a few more fundamental tools to
be able to build complex programs - specifically loops and methods. In this lesson, we'll learn how
to write loops in c++, and how to apply them in a variety of situations.

# While loops

While loops are the simplest type of loop in most programming langauges. They consist of a condition,
and a block of code that runs *while* that condition is true.

For example, let's say we're writing some code to control a simple targeting system in a video game.
This is pseudocode, not actual code, but it's sufficient to show the structure of a while loop.

```
while(target is left of where we are pointing) {
	aim towards the left
}
```

Just like an if statement, we put the condition in `()`, and the code to be run in `{}`. The condition
is, like an if statement, an expression that is either true or false.

# A simple exercise

Let's write a program that asks the user for an integer, and then repeatedly asks the user to guess what the
integer is. For example, if the integer is `3`, and you enter `78`, the program will ask you to guess again,
until you guess `3`.

Try and write as much of this as you can.

<
