#include <stdio.h>
#include <string.h>

char* my_strchr(char* param_1, char param_2){
    while(*param_1 != '\0'){
        if(*param_1 == param_2){
            return param_1;
        }
        param_1++;
    }
    return NULL;
}
    /*
int main(){
    char str[] = "hello, world";
    char* p = my_strchr(str, 'o');
    if (p != NULL) {
        printf("Found 'o' at position %ld\n", p - str);
    } else {
        printf("Couldn't find 'o'\n");
    }
    return 0;
}       */

