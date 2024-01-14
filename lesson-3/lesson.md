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
</details>
</details>
</details>
