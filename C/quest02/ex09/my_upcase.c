#include <stdio.h>
char* my_upcase(char* param_1){
    for (int i=0; param_1[i] != '\0'; i++){
        if (param_1[i] >=97 && param_1[i]<=122){
            param_1[i]-=32;
        }
    }
    return param_1;
}

        /*
int main(){
    char str[]="Hello World!";
    printf("original Case: %s\n", str);
    printf("Upcase Case: %s\n", my_upcase(str));
    return 0;
}       */
