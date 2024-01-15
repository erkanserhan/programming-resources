# Variables and scope

When we create, or declare, a variable, the computer finds a piece of memory to associate with that
variable. No other programs are allowed to use this piece of memory, because if multiple programs
tried to store different values in the same spot in memory, bad things would happen.

But, as we have seen, we sometimes have to create temporary variables in our programs that aren't necessary
for storing the inputs or for printing out the outputs. An example of this is an iterating variable in a for loop,
because we won't need it after the loop is finished.

This is where we can see a major issue: If programs continually use up memory and never free it, our computers
would run out of memory quickly and crash. Different programming languages have different methods of cleaning up
memory.

Some languages like Java, Python, or C# have a garbage collection system that tries to intelligently determine
when a variable is done being used and should be freed. While this is very convenient, it is also quite slow -
JavaScript garbage collection run time takes up a pretty big fraction of overall program run time.

C++ doesn't have a fancy intelligent garbage collection system. It uses a similar system to what C and a lot of
older programming languages use.

Look at this example program:

```c++
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if(n > 10) {
		int n_squared = n * n;
		cout << n + n_squared << endl;
	}

	for(int i = 0; i < n; i++) {
		cout << i << endl;
	}
}
```

Let's look at each variable and where it needs to be available.

The integer variable `n` is used throughout the whole program, but the `n_squared` variable inside the if statement only needs
to be accessed inside the if statement - it isn't used anywhere else. Similarly, the iterating variable `i` only needs to be used
inside of the for loop.

We can see a pattern here. Variables only need to be accessed inside the code block, or group of `{}`, that they are declared in.
In fact, this is how c++ manages memory. Once the computer reaches the ending `}` of any code block, it frees all of the variables
that were declared inside that block. In programming terms, we call this scope - each function, if statement, and loop has its own
scope, and it has its own *local variables* that are created and then freed inside it.

Basically, you are only able to access variables that are in your scope, or in the groups of `{}` you are in. Interestingly, this applies
to functions as well. A function `A()` cannot access a variable created in function `B()`, even if function `A` was run from function `B`.
Why do you think this is?

<details>
	<summary>Answer</summary>

In this example, function `B` runs function `A`, meaning that `A` runs while `B` is still running. Technically, the local variable created
in `B` should still exist in memory, because it only gets cleared after `B` is finished. However, c++ doesn't let us do this.

Say that we had another function called `C()`. If function `C` tries to run function `A`, and `C` doesn't have that local variable that `B`
does, then `A` will be trying to access a variable that doesn't exist, and it'll cause problems.

The only way to pass values safely from one function to another is to use it as an input.
</details>

# Applying scope

Knowing now how c++ manages memory, how would the program below run?

```c++
#include <iostream>
using namespace std;

int main() {
	if(3 > 2) {
		int some_variable = 35;
	} else {
		int some_variable = 39;
	}

	cout << "some_variable is: " << some_variable << endl;
}
```

<details>
	<summary>Answer</summary>

Even though `some_variable` is declared in the program on lines 6 and 8, it can't be accessed by the `cout` statement, because it gets
freed as soon as the if statement ends.

Because functions have their own scopes, we also have to be careful of situations like this:

```c++
#include <iostream>
using namespace std;

void modify_i() {
	i = 75;
}

int main() {
	int i = 35;

	modify_i();

	cout << "i is: " << i << endl;
}
```

Why does this fail, and how?

<details>
	<summary>Answer</summary>

The variable `i` is a local variable of the `main` functions, so it can't be accessed inside the function `modify_i`. The program probably
won't run in the first place, but if it did, it would print out `i is: 35`, showing that `modify_i` does not, in fact, modify `i`.

Similarly, the `main` function can't access variables created in other functions, so a program like this won't work:

```c++
#include <iostream>
using namespace std;

void square_i(int i) {
	int i_squared = i * i;
}

int main() {
	int i = 10;

	square_i();

	cout << "i squared is: " << i_squared << endl;
}
```

The proper way to pass values out of a function is to use `return`, like this:

```c++
#include <iostream>
using namespace std;

int square_i(int i) {
	return i * i;
}

int main() {
	int i = 10;

	int i_squared = square_i();

	cout << "i squared is: " << i_squared << endl;
}
```

# Exercises

If you want a variable to be accessible everywhere in a program, not just in a single function, where would you put it?

<details>
	<summary>Solution</summary>

We can't put the variables inside `main` or else we can't use them in other functions. We have to put the variables and their code
in a place somehow outside `main` - in a code block that every function is inside.

```c++
#include <iostream>
using namespace std;

int year = 2024;

void print_next_year() {
	cout << "Next year will be " << year + 1 << endl;
}

int main() {
	cout << "The year is " << year << endl;

	print_next_year();
}
```

This is called *global scope*.
</details>

What do you think this program would do? Try running it.

```c++
#include <iostream>
using namespace std;

void double_i(int i) {
	i = i * 2;
}

int main() {
	int i = 3;

	cout << "i is originally " << i << endll;

	double_i(i);

	cout << "i is now " << i << endl;
}
```

<details>
	<summary>explanation</summary>

Even though the value of `i` is passed to the function `double_i`, c++ creates a new variable to store its value.
This is because of how a lot of predecessor languages like Assembly implemented functions.

To pass the actual variable `i` to a function and be able to modify it, we'll have to use pointers, which is a more
advanced way to manage memory that we'll learn later. (To be able to properly understand pointers, we need to understand
some more complicated data structures like classes and structs.)
</details>

</details>

</details>
