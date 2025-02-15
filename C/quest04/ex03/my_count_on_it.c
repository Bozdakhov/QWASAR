#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

integer_array* my_count_on_it(string_array* param_1) {
    // Allocate memory for the output integer array
    integer_array* output = malloc(sizeof(integer_array));
    output->size = param_1->size;
    output->array = malloc(output->size * sizeof(int));
    
    // Iterate through the strings in the input array
    for (int i = 0; i < param_1->size; i++) {
        // Count the number of characters in the current string
        int count = 0;
        for (int j = 0; param_1->array[i][j] != '\0'; j++) {
            count++;
        }
        
        // Store the count in the output array
        output->array[i] = count;
    }
    
    return output;
}
