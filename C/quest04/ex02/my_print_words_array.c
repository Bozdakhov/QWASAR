#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#include <stdio.h>
#include <stdlib.h>
/*  void my_print_words_array(string_array* param_1){
    for (int i = 0; i < param_1->size; i++) {
        printf("%s\n", param_1->array[i]); // printf is prohibited 
    }
}  */

void my_print_words_array(string_array* param_1){
    for (int i = 0; i < param_1->size; i++) {
        char* str = param_1->array[i];
        int j = 0;
        while (str[j] != '\0') {
            putchar(str[j]);
            j++;
        }
        putchar('\n');
    }
}
