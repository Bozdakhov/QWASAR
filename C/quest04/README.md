# Welcome to Quest04
***

Note that this implementation assumes that each string in the array is null-terminated (i.e., has a \0 character at the end). 
If this is not the case, the function may print unexpected characters or run into undefined behavior.
## Task

The given code defines a struct named s_string_array with two fields: an integer size and a double pointer array. 
The typedef statement then creates an alias for this struct called string_array.
The function my_print_words_array takes a pointer to a string_array struct as its parameter, but it currently has no implementation.
## Description

Without further information or context, it's difficult to provide a more specific implementation for the my_print_words_array function. 
However, it seems likely that the purpose of this function is to print out each string in the array of strings (char**) 
that is stored in the array field of the string_array struct.
## Installation

Here is a possible implementation for my_print_words_array that prints out each string in the array:
c
Copy code
void my_print_words_array(string_array* param_1){
    for (int i = 0; i < param_1->size; i++) {
        printf("%s\n", param_1->array[i]);
    }
} This implementation uses a for loop to iterate through each string in the array, and printf to print out each string followed by a newline character.
## Usage

Here is another implementation of my_print_words_array that avoids using the printf function, 
as it seems to be prohibited in this context. Instead, this implementation uses the puts function to print each string:


ex00 ex01 ex02 ex03 ex04 ex05 
### The Core Team

This implementation is similar to the previous one, but instead of using printf to print each string, it uses a while loop to iterate through the characters of each string and putchar to print each character.
 The putchar function prints a single character to the standard output (i.e., the console), and the \n character is used to print a newline after each string.

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
