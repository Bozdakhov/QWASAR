# Welcome to My Square
***

## Task

This program is written in C language and is intended to print a rectangular frame with given dimensions. 
The program accepts two integer arguments (x and y) from the command line, which represent the width and height of the frame, respectively.
The standard input/output library (stdio) and the standard library (stdlib) are included in this program.
int main(int argc, char** argv){
This is the main function of the program. It takes two arguments, argc and argv, 
which are the number of command-line arguments and an array of strings containing the command-line arguments, respectively.
Let's go through the code line by line:
The first condition in the if-else block checks if the current position is one of the corners of the frame (i.e., the first row and first column, the last row and first column, the first row and last column, or the last row and last column). If it is, the program prints the character 'o' to represent the corner.
The next four conditions check if the current position is at the edge of the frame but not a corner. If it is, the program prints the character '-' to represent the horizontal edges or '|' to represent the vertical edges.
If none of the above conditions are met, the program prints a space character ' ' to represent the interior of the frame.
After printing each row, the program adds a newline character to move to the next row. Finally, the program returns 0 to indicate successful execution.
Overall, the program takes two command-line arguments representing the width and height of a rectangular frame and prints the frame using characters '-' and '|' for the edges and 'o' for the corners.

## Description

Two integer variables x and y are declared to store the width and height of the frame, respectively.
This if-else block checks if the program is passed exactly three command-line arguments (including the name of the program). 
If the number of arguments is not three, the program exits by returning zero.
Within the nested for loop, an if-else block is used to determine what character to print for each row and column position. 
If j and i correspond to the corners of the frame, it prints "o" character, otherwise, it prints "-" or "|" depending on whether it is at the edge of the frame or not. 
If neither of these conditions is met, it prints a space character.
Next, the program converts the second and third command-line arguments, which represent the width and height of the frame, respectively, from strings to integers using the atoi() function. These integers are stored in variables x and y, respectively.
The program then uses two nested for loops to iterate through each row and column of the rectangular frame. Within the nested loops, an if-else block is used to determine what character to print for each row and column position.

c
## Installation

Sure, I'd be happy to provide a more detailed explanation.
The purpose of this C program is to print a rectangular frame with given dimensions, based on the command-line arguments that the user provides. 
The program is designed to take two integer arguments as input from the command-line, which are stored in the argv array as strings. 
The first argument is the width of the rectangular frame, and the second argument is its height.
The program starts by including the necessary header files for standard input/output (stdio.h) and standard library (stdlib.h).
The main() function is the entry point of the program. It takes two arguments, argc and argv. argc is an integer representing the number of 
arguments passed to the program on the command line, and argv is an array of strings, where each element of the array is one of the command line arguments.

## Usage

The program first checks if the number of command-line arguments is equal to 3. If it is not, the program exits by returning 0. If there are exactly 3 command-line arguments, the program continues execution.
Next, the program converts the second and third command-line arguments, which represent the width and height of the frame, respectively, from strings to integers using the atoi() function. 
These integers are stored in variables x and y, respectively.
The program then uses two nested for loops to iterate through each row and column of the rectangular frame. Within the nested loops, an if-else block is used to determine what character to print for each row and column position.

The first condition in the if-else block checks if the current position is one of the corners of the frame (i.e., the first row and first column, 
the last row and first column, the first row and last column, or the last row and last column). If it is, the program prints the character 'o' to represent the corner.
The next four conditions check if the current position is at the edge of the frame but not a corner. If it is, the program prints the character '-' to represent the horizontal edges or '|' to represent the vertical edges.
If none of the above conditions are met, the program prints a space character ' ' to represent the interior of the frame.
After printing each row, the program adds a newline character to move to the next row. Finally, the program returns 0 to indicate successful execution.
Overall, the program takes two command-line arguments representing the width and height of a rectangular frame and prints the frame using characters '-' and '|' for the edges and 'o' for the corners.

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
