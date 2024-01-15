# Functions

Programs often have to run the same piece of code multiple times. A video game like Minecraft might need to draw millions of
cubes to render the world, and it would be very messy to copy and paste the code to draw a cube every single place it is needed.
Also, if the programmer ever needed to change that piece of code, they would have to find every single place it gets used, and
make the necessary change.

Functions are a way to write a piece of code once and use it anywhere in the program.
Here's the general syntax to declare, or create, a function:

```
datatype function_name(inputs) {
	code
}
```

Like declaring a variable, functions have datatypes associated to them. A piece of code that calculates the factorial of a number
would give an `int` as its result, and a function that capitalizes a word would give a `string`. Some functions don't have an
associated result, and just run a piece of code - these functions have datatype `void`.

Just like conditional statements and loops, the `{}` enclose a piece of code - the piece of code that gets run whenever this
function is run, and the `()` enclose conditions that change the behavior of the code. Rather than being just true or false, they
can be whatever the programmer wants, and there can be any number of them.

Some functions will require inputs and others won't. A function that calculates the square of an integer will need the
program to give it the integer so that it can perform calculations with it. In c++, the programmer gives the data type of
the input, and its name, which the code in the `{}` can use:

```c++
int square(int number) {}
```

If the function wants multiple inputs, the programmer separates them with spaces. They can even be different data types.

```c++
int multiply(int number1, int number2) {}
```

To give back a result, we can use the c++ `return` command. The value we give to `return` must *always* be of the correct
data type, or the program won't compile. `void` functions don't need to have a value returned at all.

Also, when we use inputs, also known as arguments, in our function, we don't need to declare the variables again, because
they already exist in memory. (Remember that declaring a variable creates a new location in memory to store data - we don't
want this because we already have the data we need in memory.)

```c++
int factorial(int number) {
	int product = 1;

	for(int i = 1; i <= number; i++) {
		product *= i;
	}

	return product;
}
```

The `return` command also exits the code running in the function. We'll show this with a simple example - a function that, given
a number `n`, outputs `n/2` if `n` is even, or `3*n + 1` otherwise.

```c++
int some_function(int n) {
	if(n % 2 == 0) {
		return n/2;
	}

	return 3*n + 1;
}
```

If the `return` command didn't exit the function when it gets run, this function would give two different values as its result.

Now that we've learned how to declare functions, how do we run them? The syntax we use is very similar to the syntax used to
declare the function, but without the data type and the code block. A semicolon is necessary, because running a function is an operation.

```c++
function_name(inputs);
```

If the function has a data type other than void, this operation will be an expression, and its value will be whatever its return value is.
For example, if we wanted to use the `factorial` function we wrote earlier, we could do this:

```
int input;
cin >> input;
int result = factorial(input);
cout << result << endl;
```

`factorial(input)` is treated like an integer, just like `35` or `295` would be.

# Utilization

Functions are a very useful tool. Not all USACO problems will require the programmer to write their own functions, because c++ has built-in
functions to do a lot of relatively complicated tasks. However, most real-world programs will use them a lot.

In order to write programs where functions are necessary, we'll have to learn more complicated data structures and concepts first, so there
won't be any exercises for this lesson.
