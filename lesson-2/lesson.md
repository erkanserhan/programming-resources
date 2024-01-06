# Lesson 2 - logic

Computer programs need to be able to make choices. For example, in a video game, the code needs to be able to check which key you are pressing,
and depending on which one it is, do a different behavior. In c++ and almost every other programming language, we implement this with an if/else statement.

The syntax for an if/else statement looks like this:

```c++
if(condition) {
	// run some code if condition is true
} else if(condition2) {
	// run if condition2 is true
} else {
	// run this if both conditions are false
}
```

`condition` needs to be true or false. In c++, we have a specific set of operations, called logical operators, which can be used to compare values.

# Example 1

Let's start with a simple program that asks the user for two numbers, and checks if they are equal.
Make a new file called `equality.cpp` and try and see how much of this program you can write with what you know so far.

<details>
	<summary>Solution</summary>

```c++
#include <iostream>
using namespace std;

int main() {
	int number_1, number_2;
	cin >> number_1, number_2;

	if(number_1 == number_2) {
		cout << "The numbers are equal!" << endl;
	} else {
		cout << "The numbers are not equal." << endl;
	}
}
```

You can see that we're checking if the two variables `number_1` and `number_2` are equal with the double equals sign `==`.
Most programming languages use this.

If the two numbers are not equal, the program simply prints out `The numbers are not equal`. Let's try to make this program
more descriptive, and print out either `The first number is greater than the second number` or `The first number is lesser than the second number` depending on the numbers inputted.

<details>
	<summary>Solution</summary>

```c++
if(number_1 == number_2) {
	cout << "The numbers are equal!" << endl;
} else if(number_1 > number_2) {
	cout << "The first number is greater than the second number." << endl;
} else {
	cout << "The first number is lesser than the second number." << endl;
}
```

Bonus: We can actually improve this code a little bit so that we aren't repeating as much code. How do you think we could improve it?

<details>
	<summary>Solution</summary>

The `cout << "The numbers are equal!" << endl;` operation is a shortened version of a longer operation.

```c++
cout << "The numbers are equal!";
cout << endl;
```

If we break down the `cout` statements in our program, we can see that the `cout << endl;` line is run in every segment
of the if statement, so we can remove it from the if statements and put it at the end instead.

```c++
if(number_1 == number_2) {
	cout << "The numbers are equal!";
} else if(number_1 > number_2) {
	cout << "The first number is greater than the second number.";
} else {
	cout << "The first number is lesser than the second number.";
}

cout << endl;
```
</details>

# Example 2

Let's try to make a more complicated program. We'll try to make a very simple calculator that asks the user for two numbers and an operation, and prints the result.
The program will accept either `+`, `-`, `*`, or `/` as an operation.

First, try to break down this task into smaller, more specific tasks.

<details>
	<summary>Solution</summary>

```
make enough space in memory for two numbers and one operation
input the numbers and the operation
make enough space for the result
check if the operation is a +, and if so, calculate the sum
check if operation is a -, and if so, calculate the difference
etc
print out the result
```

Now let's try to write the program. Make a new file called `simple-calculator.cpp`.

To store the operation, we can't use an `int` variable, because those only store numbers. Instead, use a `char`, short for `character`, which stores letters, digits, and
other symbols.

Try to write as much of the program as you can.

<details>
	<summary>Solution</summary>

```c++
#include <iostream>
using namespace std;

int main() {
	int number1, number2;
	char operation;
	cin >> number1 >> operation >> number2;

	int result;

	if(operation == '+') {
		result = number1 + number2;
	} else if(operation == '-') {
		result = number1 - number2;
	} else if(operation == '*') {
		result = number1 * number2;
	} else if(operation == '/') {
		result = number1 / number2;
	}

	cout << result << endl;
}
```

Given how much we know about how c++ stores numbers, what do you think would happen if you gave the program two very large numbers and asked it to multiply them?

Bonus: What happens if we give an operation that isn't in `+-*/`? Why does this happen, and how can we prevent it?

<details>
	<summary>Solution</summary>

To fix this, we can add another `else{}` statement that will run if none of the other conditions are true.

```c++
if(operation == '+') {
	result = number1 + number2;
} else if(operation == '-') {
	result = number1 - number2;
} else if(operation == '*') {
	result = number1 * number2;
} else if(operation == '/') {
	result = number1 / number2;
} else {
	cout << "You entered an invalid operation." << endl;
	result = 0;
}
```

There are many possible ways to deal with `result` not having an actual value. We are just setting it to 0 for simplicity.
</details>

# Exercises

In math, we aren't allowed to divide by zero. This isn't any different in programming.

Modify `simple-calculator.cpp` so that it gives you an error when you try to divide by zero.

<details>
	<summary>Solution</summary>

```c++
if(operation == '+') {
	result = number1 + number2;
} else if(operation == '-') {
	result = number1 - number2;
} else if(operation == '*') {
	result = number1 * number2;
} else if(operation == '/') {
	if(number2 == 0) {
		cout << "You can't divide by zero!" << endl;
		result = 0;
	} else {
		result = number1 / number2;
	}
}
```

We only set `result` to zero because c++ behaves strangely when variables don't have a value set. There's no reason why it would mathematically
equal zero.
</details>

What do you think would happen if you tried to compare a `char` with an `int`? Try it and see.

<details>
	<summary>Explanation</summary>

To the computer, characters such as letters or symbols are no different than numbers. Computers use what is known as ASCII to assign certain characters
certain numbers. For example, the character `a` has ASCII value `65`, and c++ will treat the expression `'a' == 65` as true.

c++, Java, and a couple other languages let you manipulate characters as if they are numbers. For example, the expression `'a' + 1` is equal to `'b'`.
</details>
</details>
</details>
</details>
</details>
