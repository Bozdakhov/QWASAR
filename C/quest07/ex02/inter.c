#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inter(char* param_1, char* param_2) {
    int i, j, k;
    int len1 = strlen(param_1);
    int len2 = strlen(param_2);
    char *result = malloc(sizeof(char) * len1); // allocate memory for the result string
    int freq[256] = {0}; // initialize the frequency array to 0
    k = 0; // index for the result string
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            if (param_1[i] == param_2[j] && freq[param_1[i]] == 0) {
                result[k++] = param_1[i]; // add the character to the result string
                freq[param_1[i]]++; // mark the character as seen
                break; // break out of the inner loop since we found a match
            }
        }
    }
    result[k] = '\0'; // terminate the result string with a null character
    return result;
}
      /*  
int main() {
    char* str1 = "padinton";
    char* str2 = "paqefwtdjetyiytjneytjoeyjnejeyj";
    char* result = inter(str1, str2);
    printf("%s\n", result); // expected output: padinto
    free(result); // free the memory allocated for the result string
    return 0;
}     */
