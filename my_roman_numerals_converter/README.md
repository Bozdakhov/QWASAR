# Welcome to My Roman Numerals Converter
***

## Task

The function takes a number num as input and returns the equivalent Roman numeral as a string. 
It first initializes an empty string called roman and a hash called roman_nums that contains the Roman numeral symbols and their corresponding values. 
The roman_nums hash is a lookup table that helps the function convert numbers to Roman numerals.
The function then iterates over the roman_nums hash using the each method. For each key-value pair in the hash, 
it first calculates the number of times the current Roman numeral should be repeated based on the value of num divided by the key in the hash. 
It then adds the corresponding Roman numeral to the roman string that many times.

## Description

After the iteration, the function returns the roman string containing the equivalent Roman numeral for the original input number num.
The reason why the roman_nums hash is ordered in a specific way is because Roman numerals are based on specific subtraction rules. 
For example, the Roman numeral for 4 is "IV", not "IIII", because "IV" is "one less than five" while "IIII" doesn't follow the subtraction rule. Similarly, 
"XC" is used to represent 90 because it is "ten less than one hundred", while "LXL" is not used because it doesn't follow the subtraction rule.

## Installation

Overall, the my_roman_numerals_converter function uses a simple algorithm to convert a number to a Roman numeral, 
relying on a lookup table to map each digit of the number to its corresponding Roman numeral symbol.
The corrections include:
Adding the missing opening and closing brackets for the my_roman_numerals_converter function.
Adding the roman_nums hash with the correct values and letters for the Roman numerals.
Fixing the indentation of the code.
Adding test cases for input 0 and the largest possible Roman numeral, 3999.

## Usage

The function then iterates over the roman_nums hash using the each method. For each key-value pair in the hash,  
it first calculates the number of times the current Roman numeral should be repeated based on the value of num divided by the key in the hash. 
It then adds the corresponding Roman numeral to the roman string that many times.
After the iteration, the function returns the roman string containing the equivalent Roman numeral for the original input number num.
The reason why the roman_nums hash is ordered in a specific way is because Roman numerals are based on specific subtraction rules. For example, 
the Roman numeral for 4 is "IV", not "IIII", because "IV" is "one less than five" while "IIII" doesn't follow the subtraction rule. Similarly, 
"XC" is used to represent 90 because it is "ten less than one hundred", while "LXL" is not used because it doesn't follow the subtraction rule.



### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
