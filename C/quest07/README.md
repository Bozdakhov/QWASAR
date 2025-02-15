# Welcome to Quest07
***

## Task

The function initializes an integer array freq of size 256 with all values set to 0. 
This array will be used to keep track of the frequency of each character in param_1.
The function calculates the lengths of param_1 and param_2 using the strlen function from the string.h library. 
If the lengths are not equal, the function returns 0, since the strings cannot be anagrams if they have different lengths.
The function then loops through each character in param_1 and increments the corresponding frequency count in freq. 
This is done by indexing into the freq array with the ASCII value of the character (which is an integer between 0 and 255) and incrementing the value at that index.
The is_anagram function takes two parameters, param_1 and param_2, which are pointers to the first characters of two strings. 
The function returns an integer, which is 1 if param_1 is an anagram of param_2, and 0 otherwise.
Here's a step-by-step breakdown of how the function works.

## Description

Next, the function loops through each character in param_2 and decrements the corresponding frequency count in freq. 
If the resulting frequency count is negative, it means that param_2 has a character that is not present in param_1 or has a higher frequency count than param_1, so the function returns 0.
If the function has made it this far, it means that param_1 is an anagram of param_2, so the function returns 1.
In essence, this function works by using an array to keep track of the frequency of each character in one of the strings (param_1) 
and then checking whether the same characters appear in the other string (param_2) with the same frequency.
The function creates an integer array called freq, which has a size of 256 (the number of possible ASCII characters) and initializes all of its values to 0. 
This array will be used to store the frequency of each character in param_1.
The function calculates the lengths of param_1 and param_2 using the strlen function from the string.h library. 
If the lengths of the two strings are different, the function immediately returns 0, because the two strings cannot be anagrams of each other if they have different lengths.
## Installation

This code defines a function rcapitalize that takes a string as input and returns a new string with the same words, 
but with the first letter of each word capitalized and the rest of the letters lowercase.
First, the function checks if the input string is NULL or empty. If so, it simply returns the same string.
Next, the function initializes a new string result of the same length as the input string (plus 1 for the terminating null character) using dynamic memory allocation with malloc.
The function then loops through the input string one character at a time. If the character is a space, it is simply copied over to the new string. 
If the character is not a space, the function looks for the end of the word by searching for the next space or the end of the string. 
It then capitalizes the first letter of the word and makes the rest of the letters lowercase, and copies the modified word into the new string.
## Usage

Once the loop is finished, the function adds a terminating null character to the end of the new string and returns it.
Note that the function modifies the input string in place, so if you need to keep the original string unchanged, you should make a copy of it before calling this function.
The function then loops through each character in param_1, increments the corresponding frequency count in the freq array, and moves on to the next character.
Next, the function loops through each character in param_2 and decrements the corresponding frequency count in the freq array. 
If at any point the frequency count becomes negative (i.e., if param_2 contains a character that is not present in param_1 or has a higher frequency count than param_1), 
the function immediately returns 0, because the two strings cannot be anagrams of each other if they contain different sets of characters or if the frequency of a character is different in each string.
If the function has looped through all of the characters in param_2 and none of them have caused the frequency count to become negative, 
the function returns 1, because the two strings must be anagrams of each other.

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
