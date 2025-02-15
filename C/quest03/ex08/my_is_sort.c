#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array{
    int size;
    int* array;
}integer_array;
#endif

bool my_is_sort(integer_array* param_1){
    int *sort = param_1->array;
    for(int i=1; i< param_1->size-1; i++){
        if(sort[i]>sort[i-1]&&sort[i]>sort[i+1]){
            return false;
        }else if(sort[i]<sort[i-1]&&sort[i]<sort[i+1]){
            return false;
        }
    }
    return true;
}

    /*
typedef struct {
    int* array;
    int size;
} integer_array;

bool my_is_sort(integer_array* param_1){
    // implementation of my_is_sort function
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    integer_array my_array = {arr, 5};
    bool is_sorted = my_is_sort(&my_array);
    if (is_sorted){
        printf("The array is sorted\n");
    } else {
        printf("The array is not sorted\n");
    }
    return 0;
}       */

