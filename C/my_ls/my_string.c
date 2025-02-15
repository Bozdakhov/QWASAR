#include "./my_string.h"

et8 my_strcmp(char* str, char* str1) {
    for( ; *str || * str1; str++, str1++) {
        if(*str != *str1) {
            return ((*str) - (*str1));
        }
    }
    return 0;
}

void swaped(char **str, char **str1) {
    char* temp = *str;
    *str = *str1;
    *str1 = temp;
}