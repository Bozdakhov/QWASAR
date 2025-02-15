#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2) {
    if (*param_2 == '\0') {
        return param_1;  // empty substring matches at start of param_1
    }
    for (; *param_1 != '\0'; param_1++) {
        char* p1 = param_1;
        char* p2 = param_2;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (*p2 == '\0') {
            return param_1;  // match found
        }
    }
    return NULL;  // match not found
}
        /*
int main() {
    char s1[] = "hello";
    char s2[] = "ll";
    char* result = my_strstr(s1, s2);
    if (result != NULL) {
        printf("Substring found at position %ld: %s\n", result - s1, result);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}       */