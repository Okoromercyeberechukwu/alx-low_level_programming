Task 0: Sum of Parameters Function
Create a function that calculates the sum of all its input parameters. If there are no parameters (n equals 0), return 0.

Prototype: int sum_them_all(const unsigned int n, ...);

Task 1: Print Numbers Function
Develop a function that prints a series of numbers separated by a specified string. You're also required to print a new line at the end.

Prototype: void print_numbers(const char *separator, const unsigned int n, ...);

The separator is the string to be printed between numbers.
n represents the number of integers passed to the function.
You can use the printf function.
If separator is NULL, don't print it.
Task 2: Print Strings Function
Write a function that prints a collection of strings separated by a specified string. You should also print a new line at the end.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);

The separator is the string to be printed between the strings.
n indicates the number of strings passed to the function.
You can use the printf function.
If separator is NULL, don't print it.
If any of the strings is NULL, print "(nil)" instead.
Task 3: Print Anything Function
Create a function that can print various data types, including characters, integers, floats, and strings.

Prototype: void print_all(const char * const format, ...);

The format argument represents a list of argument types.
Supported types are 'c' for characters, 'i' for integers, 'f' for floats, and 's' for strings.
If a string is NULL, print "(nil)" instead.
Ignore any other characters in the format.
You are not allowed to use certain constructs (for, goto, ternary operator, else, do...while) and have specific limits on loops and if statements.
You can use the printf function.
Print a new line at the end of your function.
