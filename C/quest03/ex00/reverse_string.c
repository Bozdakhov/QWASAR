#include <stdio.h>
#include <string.h>


char* reverse_string(char* param_1) {
    int len = strlen(param_1);
    for (int i = 0; i < len/2; i++) {
        char tmp = param_1[i];
        param_1[i] = param_1[len-i-1];
        param_1[len-i-1] = tmp;
    }
    return param_1;
}
    /*
int main() {
    char my_str[] = "Hello";
    printf("Before reverse -> %s\n", my_str);
    printf("Reverse -> %s\n", reverse_string(my_str));
    return 0;
}       */