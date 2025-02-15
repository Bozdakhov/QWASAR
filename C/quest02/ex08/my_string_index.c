#include <stdio.h>
#include <string.h>

int my_string_index(char* param_1, char param_2){
    for(int i=0; i< strlen(param_1); i++){
        if (param_1[i] == param_2) {
            return i;
        }
    }
    return -1;
}

        /*
int main(){
    char str[]="Hello World";
    char c= 'l';
    int result = my_string_index(str, c);
    printf("index of '%s' in '%c' is %d\n", str, c, result);
    return 0;
}       */

//a s t r u m
//      r
//a == r
//97 == 114
//r == r
//114 == 114