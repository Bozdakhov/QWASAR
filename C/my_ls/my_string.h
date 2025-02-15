#ifndef MY_STRING_H
#define MY_STRING_H
#include <stdint.h>

#ifndef ET8
#define ET8
typedef int8_t et8;
#endif

et8 my_strcmp(char* str, char* str1);
void swaped(char** str, char** str1);
#endif