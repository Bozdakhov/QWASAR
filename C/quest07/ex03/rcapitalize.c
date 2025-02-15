#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char* rcapitalize(char* param_1) {
    if (param_1 == NULL || strlen(param_1) == 0) {
        return param_1;
    }
    int len = strlen(param_1);
    char* result = (char*) malloc(len + 1);
    if (result == NULL) {
        return NULL;
    }
    int i = 0;
    while (i < len) {
        if (isspace(param_1[i])) {
            result[i] = param_1[i];
            i++;
            continue;
        }
        int wordStart = i;
        int wordEnd = i + 1;
        while (wordEnd < len && !isspace(param_1[wordEnd])) {
            wordEnd++;
        }
        i = wordEnd;
        if (wordEnd - wordStart == 1) {
            result[wordStart] = toupper(param_1[wordStart]);
            continue;
        }
        for (int j = wordStart; j < wordEnd - 1; j++) {
            result[j] = tolower(param_1[j]);
        }
        result[wordEnd - 1] = toupper(param_1[wordEnd - 1]);
    }
    result[len] = '\0';
    return result;
}
