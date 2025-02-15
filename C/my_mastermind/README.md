# Welcome to My Mastermind
***

## Task

This code is an implementation of the "Mastermind" game in C, where the user has to guess a secret code composed of numbers between 0 and 8. 
The game is played through the command line.
The code starts with some include statements for necessary libraries like stdio.h, stdlib.h, unistd.h, and time.h.
After that, a flag named CODERING is defined with a value of 4, which determines the length of the code.
Then a typedef statement defines a new type called flag as an unsigned short. This is used to represent the matched pieces in the game.
The code declares a static array called matched of size CODERING to store the matched flags, which will be used to count the deployed and misplaced pieces in the guess.
After that, the code defines three functions: mystrcpy, readinput, and two functions to count the deployed and misplaced pieces in the guess.

## Description

The mystrcpy function is a custom implementation of the strcpy function that copies one string to another. 
The readinput function reads the user's input from the console and validates it to make sure that it's a valid guess. 
The count_deployed and count_mislaid functions count the number of pieces that are correctly placed and misplaced in the guess, respectively.
The main function of the code is defined next. It starts with a check to make sure that the correct number of command-line arguments are passed. 
If not, it displays a usage message and exits.

## Installation

The code then sets the number of tries to 10 and declares an empty codevale array of size CODERING + 1. 
The while loop reads the command-line arguments and updates the variables tries and codevale as needed.
The code then initializes the findle array and starts the game. It generates a random codevale array if the user doesn't specify a code. 
It then reads the user's guess and counts the number of correctly placed and misplaced pieces.
The while loop continues until the user either correctly guesses the code or uses up all their tries. 
If the user correctly guesses the code, the code prints a congratulatory message. Otherwise, it displays the correct code to the user.

## Usage

This code is a C implementation of the popular board game "Mastermind". 
The game generates a secret code (represented as a sequence of digits) that the player has to guess within a limited number of attempts.
The player enters a guess (also represented as a sequence of digits) and the code checks how many digits are in the correct position and how many are in the wrong position but present in the code. 
The game ends when the player guesses the code correctly or exhausts all attempts.
Here is a brief summary of the program's logic:
The program checks the command-line arguments for the number of attempts and the secret code. If any arguments are invalid, the program exits with an error message.
If the secret code is not provided as an argument, the program generates a random code.
The program enters a loop that prompts the player for a guess and evaluates the guess. The loop continues until the player guesses the code correctly or exhausts all attempts.
The player's guess is read from the standard input and validated to ensure that it is a sequence of digits of the same length as the secret code.
The guess is evaluated to determine how many digits are in the correct position and how many are in the wrong position but present in the secret code. The evaluation is done by the count_deployed() and count_mislaid() functions.
The program outputs the number of well-placed and misplaced digits in the player's guess.
If the player guesses the code correctly, the program outputs a congratulatory message. Otherwise, the program outputs the secret code and a message indicating that the player has lost.


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
