# Lesson 1 - Introduction

In this class, I'll start from the very basics of c++ and work up to complex algorithms that can be used for USACO, game design, or pretty much anything.

# This will not be your average programming class

A lot of coding classes at school make it seem like programming is simply about memorizing what to type out to make the computer do what you want.
While it is important to memorize some basic syntax, the key to being a good coder is to understand how to break up a problem into smaller tasks
that the computer can understand. In other words, thinking like a programmer.

I won't start this class by walking through the classic programming examples. Instead, I'll start with some of the very fundamentals of how
computers and programming languages work, and build up from there to syntax and actual code.

Rather than use a standardized curriculum, I'll focus a lot on certain fundamentals. Some of these are very useful not only for writing good USACO solutions,
but also write code much more efficiently. Some of them are concepts that, when I taught myself c++, I found were the hardest concepts to understand.

# Let's get into it!

What exactly does a computer program do? It "talks" to the computer, but how?

All programs really do is move around pieces of memory. Programming languages are the way that we programmers can tell the computer
exactly *how* to move around its pieces of memory.

Programming languages can be classified as "low-level" or "high-level", based on how directly we interact with the computer.
C++ is a very low-level language, so we'll to understand memory pretty well. With a high-level language like Python, we wouldn't need to, but this also enables
us to do much more powerful tasks with c++.

Let's start by building a program that doubles a number.

"double a number" is too complicated for the computer to understand as it is. (computers aren't that smart!)

How would we break this up into smaller tasks that the computer can understand?

<details>
  <summary>Next section</summary>
  
```
ask user for a number
double the number
print out the result
```

To turn this into a program that we can have the computer run, we'll need to learn how to do some of these operations in c++.

Make a new file called `doubler.cpp`. Copy and paste this code into the file:

```c++
#include <iostream>
using namespace std;

int main() {
	
}
```

This code doesn't do any of the inputting or doubling or outputting, but it's necessary for the whole thing to run.

Now, we need to implement the first part of our `doubler` program - asking the user for an input.

To be able to work with the number we get, we need to store it somewhere. We'll use a variable, which is basically a specific
location in the computer's memory.

```c++
int main() {
	int user_input;
}
```

When we create variables in c++, we have to tell the computer what sort of information will be stored in the variable.

Next, we need to take in an input from the user. In c++, we input and output using `cin` and `cout`.

```c++
cin >> some_variable;
cout << "This gets printed on screen!";
```

Try to use this in our `doubler.cpp` program.

<details>
  <summary>Next section</summary>
	
```c++
int main() {
	int user_input;
	cin >> user_input;
}
```

Our next step is to double the inputted number. Make another variable to store the result.

<details>
	<summary>Next section</summary>
 
```c++
int user_input;
cin >> user_input;

int result;
result = user_input * 2;
```

This code works, but it's unnecessarily long. We can actually shorten this.

```c++
int user_input;
cin >> user_input;

user_input = user_input * 2;
```

```c++
int user_input;
cin >> user_input;

user_input *= 2;
```

Now we need to print out the result. Try to use `cout`.

<details>
	<summary>Next section</summary>

```c++
int user_input;
cin >> user_input;

user_input *= 2;

cout << user_input << endl;
```

You might notice the `endl` symbol. This is a special character that represends a newline (enter key).
Some IDEs will print output weirdly if you don't use a newline at the end of your program. Others don't but it's good practice
just in case.

The program seems like it works - but what if you give it a really big number, like `1111111111`?

# memory limits

A normal c++ `int` is 32 bits. It can't store numbers bigger than around `2000000000` (2 with 9 zeroes). If we want to be able to calculate
bigger numbers, we have to use a different type of variable with a bigger size - `long long`.

# Exercises

Modify the `doubler.cpp` program so that it gives the user a prompt when run, such as `Enter a number for the program to double: ` or something like that.

<details>
	<summary>Solution</summary>

```c++
cout << "Enter a number for the program to double: ";

int user_input;
cin >> user_input;

user_input *= 2;

cout << user_input << endl;
```
</details>

What if you wanted the program to input two numbers and add them together, instead of taking in one number and doubling it?
For example, if you inputted `2` and `3`, it would print out `5`.

<details>
	<summary>Solution</summary>

```c++
int number1, number2;
cin >> number1 >> number2;

int result = number1 + number2;

cout << result << endl;
```
</details>

</details>
</details>
</details>
</details>
