#include <stdio.h>
#include <string.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array{
    int size;
    int* array;
} integer_array;
#endif

void my_first_struct(integer_array* param_1){
    
    printf("%d\n", param_1->size); // Print the size of the array
    for (int i = 0; i < param_1->size; i++) {   // Print the elements of the array
    printf("%d\n", param_1->array[i]);
    }
}
        /*
int main() {
    
    int arr1[] = {0};   // Example usage
    integer_array arr1_struct = {1, arr1};
    my_first_struct(&arr1_struct);

    int arr2[] = {1, 2, 3};
    integer_array arr2_struct = {3, arr2};
    my_first_struct(&arr2_struct);

    int arr3[] = {10, 2, 3, 3, 0, -1};
    integer_array arr3_struct = {6, arr3};
    my_first_struct(&arr3_struct);
    return 0;
}    */