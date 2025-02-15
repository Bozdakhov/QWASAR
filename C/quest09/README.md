# Welcome to Quest09
***

## Task

This code is an implementation of a function that merges k sorted linked lists into a single sorted linked list. 
The function takes a parameter listnode_array* param_1, which is a pointer to a listnode_array structure. 
This structure contains two fields - an integer size and a pointer to an array of pointers to listnode structures. 
Each element of the array represents a linked list that needs to be merged.
The merge_k_sorted_lists function first checks if the param_1 pointer is not null and the size of the array is not zero. 
If either of these conditions is true, the function returns null, indicating an error.

## Description

The function then uses a recursive helper function merge_two_lists to merge the linked lists pairwise until only one list remains. 
The merge_two_lists function takes two linked lists and returns a single sorted linked list. 
It achieves this by comparing the values of the first nodes of the two linked lists and selecting the smaller one. 
It then calls itself recursively on the remaining nodes of the selected linked list and the other unselected linked list. 
This process continues until one of the lists is exhausted, and the function returns the merged linked list.
The merge_k_sorted_lists function uses a while loop to merge the linked lists pairwise. The loop starts with left = 0 and right = param_1->size - 1. 
It then iterates until right becomes less than or equal to 0. Within the loop, another while loop iterates until left becomes greater than or equal to right. 
Within this loop, the function calls merge_two_lists on the linked lists at left and right indices of the array and stores the result back in the left index of the array

## Installation

The function then increments left and decrements right to move towards the center of the array. 
After each iteration of the outer while loop, left is reset to 0, and the process continues until only one linked list remains in the array.
Finally, the function returns a pointer to the head of the merged linked list, which is stored in the 0th index of the array. 
If the param_1 pointer is null or the size of the array is zero, the function returns null.
Overall, this implementation has a time complexity of O(nk log k) and a space complexity of O(k), where n is the average length of the linked lists, 
and k is the number of linked lists. This implementation is efficient and can handle large numbers of linked lists with different lengths.

## Usage

This code implements a function to reverse a singly linked list. The function takes a single parameter listnode* param_1, 
which is a pointer to the head of the linked list to be reversed. 
The function returns a pointer to the new head of the reversed linked list.
The function works by traversing the linked list, starting from the head node. 
It uses three pointers - prev, current, and next to keep track of the previous, current, and next nodes in the linked list, respectively.
Initially, the prev pointer is set to NULL, and the current pointer is set to param_1, i.e., the head of the original linked list. 
The next pointer is set to NULL to initialize it before it is used in the while loop.
The while loop continues as long as the current pointer is not NULL. 
Within the while loop, the next pointer is set to the next node in the original linked list by accessing the next field of the current node. 
The current node's next field is then set to prev, effectively reversing the link between current and prev. 
The prev pointer is then updated to point to the current node, and the current pointer is updated to point to the next node. 
This process is repeated until the end of the linked list is reached.
Finally, the prev pointer points to the head of the reversed linked list, which is returned by the function.
Overall, this implementation has a time complexity of O(n), where n is the length of the linked list, since each node in the linked list is visited exactly once. 
The space complexity of this implementation is O(1), as only three pointers are used to reverse the linked list, regardless of the length of the linked list.


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
