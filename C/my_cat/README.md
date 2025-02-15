# Welcome to My Cat
***

## Task

This implementation uses the standard C library functions to read and print the contents of each file specified as a command-line argument. 
It first checks that at least one argument (in addition to the program name) was passed, and then loops through each argument and attempts to open and read the corresponding file. 
If a file cannot be opened, it prints an error message and exits with a non-zero status code. If all files are successfully read, it exits with a status code of 0.
The main function takes two arguments: argc, the number of arguments passed to the program, and argv, an array of strings containing the actual arguments. 
The first argument (argv[0]) is the name of the program itself.

## Description

This implementation uses fread() to read the file contents into a buffer, and fwrite() to write the buffer contents to stdout. The buffer size is set to 1024 bytes, 
but you can adjust this value as needed for your use case. If a file cannot be opened, it prints an error message and exits with a non-zero status code. 
If all files are successfully read, it exits with a status code of 0.These are standard C header files included for input/output operations and for dynamic memory allocation. 
BUFFER_SIZE is a constant that defines the size of the buffer to be used for reading and writing files.

## Installation

This if statement checks whether at least one command line argument was passed (in addition to the program name), and prints usage instructions if not. 
The program then exits with a non-zero status code (1) to indicate that an error occurred.
This for loop iterates over all the command line arguments starting from the second one (i.e., index 1), opening each file for reading using the fopen function. 
If the file could not be opened (e.g., because it does not exist or the user does not have sufficient permissions to access it), 
an error message is printed and the program exits with a non-zero status code (1).

## Usage

Inside the for loop, a buffer of size BUFFER_SIZE is created to hold the file contents. 
The fread function is used to read up to BUFFER_SIZE bytes from the current file into the buffer. The number of bytes actually read is stored in the bytes_read variable. 
The while loop continues as long as bytes are successfully read from the file (i.e., bytes_read is greater than zero). 
Inside the loop, the fwrite function is used to write the contents of the buffer (i.e., the bytes just read from the file) to standard output.
Finally, the program closes the current file using the fclose function and moves on to the next file (if any). 
If all files have been processed successfully, the program exits with a zero status code to indicate success.



### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
