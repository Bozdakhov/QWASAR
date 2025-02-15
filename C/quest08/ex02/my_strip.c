#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* my_strip(char* param_1) {
    // Check if input is empty
    if (strlen(param_1) == 0) {
        return "";
    }

    // Remove leading spaces/tabs
    char* start = param_1;
    while (isspace(*start)) {
        start++;
    }

    // Remove trailing spaces/tabs
    char* end = param_1 + strlen(param_1) - 1;
    while (isspace(*end)) {
        end--;
    }
    *(end + 1) = '\0';

    // Remove extra spaces/tabs between words
    char* result = (char*)malloc((end - start + 2) * sizeof(char));
    char* current = result;
    int space_flag = 0;
    while (*start) {
        if (isspace(*start)) {
            if (!space_flag) {
                *current++ = ' ';
                space_flag = 1;
            }
        } else {
            *current++ = *start;
            space_flag = 0;
        }
        start++;
    }
    *current = '\0';

    return result;
}
        /*
int main() {
    char input_00[] = "See? It's easy to print the same thing";
    char input_01[] = " this        time it      will     be    more complex  . ";
    char input_02[] = "No  S***    Sherlock...";
    char input_03[] = "";

    printf("%s\n", my_strip(input_00)); // "See? It's easy to print the same thing"
    printf("%s\n", my_strip(input_01)); // "this time it will be more complex ."
    printf("%s\n", my_strip(input_02)); // "No S*** Sherlock..."
    printf("%s\n", my_strip(input_03)); // ""

    return 0;
}       */
