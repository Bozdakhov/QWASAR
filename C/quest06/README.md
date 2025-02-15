# Welcome to Quest06
***

## Task

The function first initializes the result variable to 0, and sets the sign to 1 by default. It then checks the first character of the input string to see if it is a negative sign. 
If it is, the sign variable is set to -1, and the function starts converting the digits starting from the second character.
The function then loops through each character of the input string, and converts each digit to its integer equivalent using the ASCII code table. 
The function multiplies the result variable by 10 and adds the integer value of the current digit to it. This process continues until the end of the string is reached.
The my_fibonacci function is a recursive function that calculates the n-th element of the Fibonacci sequence, where n is the input parameter passed to the function.  
It works by breaking down the problem into smaller subproblems until it reaches the base cases.


## Description

The negative input parameter is considered an invalid input because the factorial operation is undefined for negative numbers. 
Returning 0 as an error indicator is a common convention in C programming.
If the input string contains any non-digit characters, the function returns 0 as an error indicator, indicating that the conversion failed. 
If the input string is valid, the function returns the integer result with the appropriate sign.
For the base case of the factorial operation, the function returns 1 because the factorial of 0 and 1 is 1 by definition.
For all other inputs greater than 1, the function uses recursion to calculate the factorial. 
The function calls itself with the input parameter decremented by 1, until it reaches the base case. Once the base case is reached, 
the function returns the result of the multiplication of the input parameter and the result of the recursive call. 
This multiplication operation is the core of the factorial operation, as it multiplies the current number with the product of all the previous numbers until 1.

## Installation

The function uses recursion to calculate the n-th element of the Fibonacci sequence. 
It first checks if the input parameter is less than 0, in which case it returns -1 as an error indicator. 
If the input is 0, the function returns 0 as the base case of the Fibonacci sequence. If the input is 1 or 2, the function returns 1 as the second and third elements of the sequence.
For all other inputs, the function uses recursion to calculate the n-th element of the sequence by adding the previous two elements. 
The function calls itself twice with the parameter decremented by 1 and 2, respectively, until it reaches the base cases. 
The two results are then added and returned as the final result.
Note that since the Fibonacci sequence grows exponentially, large values of n may cause the function to take a long time to compute.
The function first checks if the input parameter is negative, in which case it returns 0 as an error indicator. 
If the input is 0 or 1, the function returns 1 as the base case of the factorial operation. For all other inputs, 
the function uses recursion to calculate the factorial by multiplying the input parameter with the result of the same function called with the parameter decremented by 1.

## Usage

The function takes two parameters, param_1 and param_2, representing the number and the power, respectively.
The function first checks if the power is less than 0. If it is, the function returns 0. 
This is because any number raised to a negative power results in a fraction, which is not supported by this function.
If the power is 0, the function returns 1. This is because any number raised to the power of 0 is 1.
If the power is greater than 0, the function recursively calls itself with the same number and the power decremented by 1. 
It then multiplies the number by the result of the recursive call and returns the result.
This process continues until the power reaches 0, at which point the function returns 1, or until the power becomes negative, at which point the function returns 0.




### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
