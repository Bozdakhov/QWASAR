#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY

typedef struct string_array {
    int size;
    char** array;
} string_array;

#endif

string_array* my_split(char* param_1, char* param_2)
{
    // Count the number of separators in the string
    int count = 0;
    char* p = param_1;
    while (*p) {
        if (*p == *param_2) {
            count++;
        }
        p++;
    }

    // Allocate memory for the result
    string_array* result = (string_array*) malloc(sizeof(string_array));
    result->size = count + 1;
    result->array = (char**) malloc(result->size * sizeof(char*));

    // Split the string
    char* token = param_1;
    int i = 0;
    while (*token) {
        if (*token == *param_2) {
            *token = '\0'; // replace separator with null terminator
            if (token != param_1) {
                result->array[i++] = param_1; // add non-empty string to result
            }
            param_1 = token + 1; // set pointer to next string
        }
        token++;
    }
    // add final string to result (if not empty)
    if (param_1 != token) {
        result->array[i] = param_1;
    } else {
        result->size--;
    }

    return result;
}
