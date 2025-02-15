#include <stdlib.h>
#include <string.h>

char* my_union(char* param_1, char* param_2) {
    int len1 = strlen(param_1);
    int len2 = strlen(param_2);
    char* result = malloc(len1 + len2 + 1); // allocate memory for the result string
    if (result == NULL) { // check if malloc failed
        return NULL;
    }
    int i, j, k = 0;
    char seen[256] = {0}; // keep track of seen characters
    for (i = 0; i < len1; i++) { // copy unique characters from param_1 to result string
        if (!seen[(unsigned char) param_1[i]]) {
            result[k] = param_1[i];
            seen[(unsigned char) param_1[i]] = 1;
            k++;
        }
    }
    for (j = 0; j < len2; j++) { // copy unique characters from param_2 to result string
        if (!seen[(unsigned char) param_2[j]]) {
            result[k] = param_2[j];
            seen[(unsigned char) param_2[j]] = 1;
            k++;
        }
    }
    result[k] = '\0'; // add null terminator to result string
    return result;
}
