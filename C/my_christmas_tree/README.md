# Welcome to My Christmas Tree
***

## Task

This is a C program that prints a Christmas tree shape made out of asterisks and vertical bars based on the number of layers specified by the user. 
The program takes a single command-line argument, which is the number of layers in the tree.
The program consists of several functions:
get_max_star_num(int total_layer_num) calculates the maximum number of asterisks that will be printed on the last line of the tree. 
It takes as input the total number of layers and uses a loop to iterate through each layer, adding the appropriate number of asterisks for each line of the layer. 
It returns the total number of asterisks.
get_max_space_num(int total_layer_num) calculates the maximum number of spaces that will be printed on the last line of the tree. 
It calls get_max_star_num to get the total number of asterisks and then divides by 2, since each asterisk is separated by a space.


## Description

This code is a C program that prints a Christmas tree on the console using ASCII characters.
The tree consists of a body, which is made of several layers of increasing widths, and a base, which is a rectangular block of characters. 
The number of layers and the width of the tree are determined by the first command-line argument passed to the program.
Here is a brief explanation of each function in the program:
print_symbol(char sym, int num) prints a specified symbol a specified number of times.
print_layer(int layer_index, int first_line_star_num, int max_space) prints a single layer of the tree. 
It takes as input the layer index (starting from 1), the number of asterisks on the first line of the layer, and the maximum number of spaces to be printed on the last line of the tree. 
It calculates the number of spaces to print before each line based on the current line's number of asterisks and the maximum number of spaces, 
and then calls print_symbol to print the appropriate number of spaces and asterisks for each line.

## Installation

get_max_star_num: This function calculates the maximum number of stars that can be used to create the body of the tree, based on the total number of layers.
get_max_space_num: This function calculates the maximum number of spaces needed to align the body of the tree, 
based on the maximum number of stars calculated by the get_max_star_num function.
print_symbol: This function prints a given symbol a specified number of times on the console.
print_body(int total_layer_num) prints the body of the tree, consisting of all the layers. 
It takes as input the total number of layers and uses a loop to call print_layer for each layer. 
It also adjusts the number of asterisks on the first line of each layer based on the current layer's index and the total number of layers.
print_base(int total_layer_num) prints the base of the tree, consisting of a row of vertical bars. 
It takes as input the total number of layers and uses a loop to print the appropriate number of vertical bars, with the appropriate number of spaces before the first one.


## Usage

print_layer: This function prints a single layer of the tree, consisting of several lines of stars and spaces, based on the layer index, the starting number of stars, 
and the maximum number of spaces calculated by the get_max_space_num function.
print_body: This function prints the body of the tree, consisting of multiple layers of stars and spaces, based on the total number of layers specified.
print_base: This function prints the base of the tree, which is a rectangular block of characters that serves as the bottom part of the tree.
print_tree: This function is the main function that calls the print_body and print_base functions to print the complete tree.
main: This is the entry point of the program. It checks if a command-line argument has been provided, and if so, it converts the first character of the argument to an integer and passes it to the print_tree function to print the tree. If no argument is provided, the program exits without doing anything.
print_tree(int total_layer_num) is the main function that calls print_body and print_base to print the entire tree. It takes as input the total number of layers.
main(int ac, char** av) is the main function of the program. It takes command-line arguments ac and av, checks if a single command-line argument was given, 
and converts it to an integer representing the total number of layers in the tree. If the number of layers is greater than 0, it calls print_tree to print the tree



### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
