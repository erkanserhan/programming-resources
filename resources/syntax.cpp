// syntax cheat sheet - will be continuously updated

// generic program setup:

    #include <iostream> // import necessary libraries
    #include <vector>

    using namespace std; // link to the standard library

    int main() {
        // put the program code here
    }

// variables:
// declaration: <datatype> <varname> = <value>(optional);
    
    int an_integer = 35;
    
    float three_halfs = 1.5;
    
    bool is_daytime = true;
    
    string some_value;

// assignment: <varname> = <value>;
    
    age = 15;
    
    key_pressed = 'w';

// operations:
    
    a == b; // equality check
    
    a + b; // math
    a - b;
    a * b;
    a / b;
    
    a++; // increment/decrement (adds/subtracts 1 from a)
    a--;

    a += b; // shorthand math syntax
    a -= b;
    a *= b;
    a /= b;

// program flow:
// if/else statement:

    if(condition) {
        // code to run if `condition` is true
    } else if(condition2) {
        // code to run if `condition2` is true
    } else {
        // code to run if neither are true
    }

// while loop:

    while(condition) {
        // repeat this code while `condition` is true
    }

// for loop:
// `initial` is run before the loop starts
// `condition` is checked every loop, and will end the loop if it is false
// `increment` is run every loop

    for(initial; condition; increment) {
        // code to run for each loop of the for loop
    }
