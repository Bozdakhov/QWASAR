# Welcome to My Java Mastermind
***

## Task

The challenge is to create a program called my_mastermind that implements the classic Mastermind game. 
The game involves guessing a secret code made up of 4 distinct pieces out of 9 possible colors. 
The player has 10 attempts to guess the code. After each guess, 
the game provides feedback on the number of well-placed pieces and the number of misplaced pieces.
The pieces are represented by the characters '0' to '8'.
The game provides feedback in terms of well-placed pieces and misplaced pieces after each guess.
.gitignore
Add a .gitignore file to exclude compiled Java classes and other unnecessary files. Here's a simple example:
*.class
.idea/

## Description

Mastermind is a game composed of 9 pieces of different colors.
A secret code is then composed of 4 distinct pieces.
The player has 10 attempts to find the secret code.
After each input, the game indicates to the player the number of well placed pieces and the number of misplaced pieces.
Pieces will be '0' '1' '2' '3' '4' '5' '6' '7' '8'.
If the player finds the code, they win, and the game stops.
A misplaced piece is a piece that is present in the secret code but is not in a good position.
You must read the player's input from the standard input.
Your program will also receive the following parameters:
-c [CODE]: specifies the secret code. If no code is specified, a random code will be generated.
-t [ATTEMPTS]: specifies the number of attempts; by default, the player has 10 attempts.
I have implemented the Mastermind game in Java. The program takes command-line arguments to customize the game:
-c [CODE]: Specifies the secret code. If no code is specified, a random code will be generated.
-t [ATTEMPTS]: Specifies the number of attempts; by default, the player has 10 attempts.
The game prompts the player to input their guesses, validates the input, and provides feedback after each round. 
The player wins if they correctly guess the secret code within the given attempts.
PROMPT>java my_mastermind -c "0123"
Will you find the secret code?
---
Round 0
>1456
Well placed pieces: 0
Misplaced pieces: 1
---
Round 1
>tata
Wrong input!
>4132
Well placed pieces: 1
Misplaced pieces: 2
---
Round 2
>0123
Congrats! You did it!

## Installation

To compile the program, use the following command:
javac my_mastermind.java

## Usage

Run the program with the following command:
java my_mastermind -c "0123"
The player will be prompted to input their guesses, 
and the game will provide feedback until the player either guesses the code or runs out of attempts.


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
