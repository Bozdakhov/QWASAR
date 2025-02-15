# Welcome to Quest03
***

## Task

The my_is_sort function takes a pointer to an integer_array structure as input and returns a boolean value (true or false). 
The integer_array structure contains an array of integers and a size variable indicating the number of elements in the array.

## Description

The my_is_sort function checks whether the array is sorted in non-descending or non-increasing order. 
It does this by iterating over each element in the array (except the first and last elements, 
since they don't have two neighbors to compare to) and checking if it is greater or less than its neighboring elements.

## Installation

 If an element is found to be greater than both its neighbors or less than both its neighbors, then the array is not sorted and the function returns false. 
 Otherwise, 
 if the function makes it through the entire array without finding any out-of-order elements, then the array is sorted and the function returns true.

## Usage

However, there is a potential issue with the function's implementation. 
The for loop only iterates over the elements between the first and second-to-last elements of the array, so the last element is never checked. 
To fix this, the loop condition should be i < param_1->size instead of i < param_1->size - 1. 
The corrected code would look like this:




### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
