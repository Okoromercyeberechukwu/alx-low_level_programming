Task 0: Print Name Function
Create a function that takes a name as input and prints it. The function's prototype should be: void print_name(char *name, void (*f)(char *));

Task 1: Array Iterator Function
Develop a function that applies another function to each element of an array. The function should have the prototype: void array_iterator(int *array, size_t size, void (*action)(int));. You need to provide the array's size and a pointer to the function to use.

Task 2: Integer Search Function
Write a function that searches for an integer in an array using a custom comparison function. The prototype is: int int_index(int *array, int size, int (*cmp)(int));. The function returns the index of the first element that doesn't return 0 from the comparison function. If no match is found or size is less than or equal to 0, return -1.

Task 3: Simple Calculator Program
Develop a program that performs basic arithmetic operations. The program takes two integers and an operator as input. It uses the atoi function to convert strings to integers and supports operations such as addition, subtraction, multiplication, division, and modulo. It prints the result, handles input errors, and returns different exit statuses for various issues.

This task involves creating four different files:

3-calc.h: Contains function prototypes and data structures used by the program.
3-op_functions.c: Implements five functions for addition, subtraction, multiplication, division, and modulo operations.
3-get_op_func.c: Defines a function that selects the appropriate operation function based on the operator provided as input.
3-main.c: Contains the main function that handles program execution and user input.
Task 4: Print Opcodes of Main Function
Create a program that prints the opcodes (in hexadecimal, lowercase) of its own main function. The program takes the number of bytes to print as a command-line argument. It uses printf and atoi, checks for input errors, and prints the opcodes of its main function in the specified format.
