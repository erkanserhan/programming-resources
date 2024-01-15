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

# A simple example

Let's write a program that asks the user for an integer, and then repeatedly asks the user to guess what the
integer is. For example, if the integer is `3`, and you enter `78`, the program will ask you to guess again,
until you guess `3`.

Let's write the first part of the program - asking the user for the integer.

<details>
	<summary>Solution</summary>

```c++
#include <iostream>
using namespace std;

int main() {
	int integer_to_guess;

	cout << "Enter the integer to guess: ";
	cin >> integer_to_guess;
}
```

Now, we need to ask the user to guess numbers until they guess correctly.

How could we do that with a while loop?

<details>
	<summary>Solution</summary>

```c++
int guess;

cin >> guess;

while(guess != integer_to_guess) {
	cout << "Incorrect! Please guess again: ";
	cin >> guess;
}

cout << "You got it!" << endl;
```

Currently, if you guess incorrectly, the program just tells you that you got it wrong.
It would be more helpful if the program instead tells you if you guessed too high or too long.
Try to add this to the program.

<details>
	<summary>Solution</summary>

```c++
while(guess != integer_to_guess) {
	if(guess > integer_to_guess) {
		cout << "You guessed too high. Please guess again: ";
	} else {
		cout << "You guessed too low. Please guess again: ";
	}

	cin >> guess;
}
```

# A slightly more complex example

While loops are useful for a variety of situations. Let's write a new program that adds together any number of integers that the user gives.
First, it should ask the user for how many numbers to add together, and then ask for each of the numbers.

Write the first half of the program - the part that asks the user how many numbers to add together.

<details>
	<summary>Solution</summary>

```c++
#include <iostream>
using namespace std;

int main() {
	cout << "How many numbers do you want to add together? ";
	int numbers_to_add;
	cin >> numbers_to_add;
}
```

How can we write the other half of the program? There are many ways to add together a bunch of numbers with c++. In our example,
we'll store in a variable the sum of the numbers we've added so far, and each time the user inputs a number, we add it to
our sum.

The harder part is using a while loop to ask the user for numbers exactly `numbers_to_add` times. How could we implement this?

<details>
	<summary>Hint</summary>

Say that you have to complete a certain task 25 times exactly. What's an easy way for you to keep track of how many times you've
completed that task?
</details>

<details>
	<summary>Solution</summary>

We can create a variable to store the number of times we've asked for an input. In each run of the while loop, we can increase
this count, and in the condition of the while loop, we check if the count has reached `numbers_to_add`.

```c++
int count = 0, sum = 0;

while(count < numbers_to_add) {
	int input;
	cin >> input;
	sum += input;

	count++;
}

cout << "The sum is " << sum << endl;
```

This code works quite well, but it's inconvenient to add a bunch of variables and operations in our code that clutter it up.

# For loops

For loops are a specific type of while loop that specialize in running some piece of code a certain number of times,
or for running an operation on a group of variables. The syntax looks like this:

```c++
for(initial; condition; iterate) {
	code
}
```

This is more complicated than a basic while loop, but it operates very similarly. Like a while loop, it has a `condition` that is
either true or false that controls whether or not the for loop will continue. `initial` is an expression that gets run before the
start of the for loop, and `iterate` is an operation that runs every iteration, or loop, of the for loop.

If we look at our previous example, where we stored the number of times our while loop ran in a variable called `count`, it becomes
more clear what `initial` and `iterate` can be used for. To rewrite our old code with a for loop, we simply do this:

```c++
int sum = 0;

for(int count = 0; count < numbers_to_add; count++) {
	int input;
	cin >> input;
	sum += input;
}

cout << "The sum is " << sum << endl;
```

Now that the code involving `count` is all in one place, it doesn't clutter up the rest of our program.

We call a variable that keeps track of the number of times a loop has run, or the number of iterations, as an *iterating variable*.
Most often, programmers use `i` as the name of an iterating variable, or `j`, `k`, `l`, etc. when necessary. ~~(unless you are erick)~~

Interestingly, `initial` and `iterate` can be left blank, and the code

```c++
for(;condition;) {
	code
}
```

runs identically to

```c++
while(condition) {
	code
}
```

# Exercises

Write a program that calculates the factorial of whatever number is given to it.

<details>
	<summary>Solution</summary>

```c++
#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	int product = 1; // We can't set it to 0
	for(int iteration = 1; iteration < input; iteration++) {
		product *= iteration;
	}

	cout << product << endl;
}
```
</details>

Given two numbers `A` and `B`, write a program that prints out all of the multiples of `B` that are less than `A`.
This one takes a bit of thought.

<details>
	<summary>Solution</summary>

For loops are basically just fancy while loops that keep track of a counter. Up until now, we've had the counter
increase by 1 every loop, but this isn't the only thing we can do. If we start the counter at `B`, and increase
it by `B` every loop, and make our condition `counter < A`, our program will print out `B`, `2*B`, `3*B`, etc. until it
hits `A`.

```c++
#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	for(int multiple = B; multiple < A; multiple += B) {
		cout << multiple << endl;
	}
}
```
</details>

</details>

</details>

</details>

</details>

</details>
