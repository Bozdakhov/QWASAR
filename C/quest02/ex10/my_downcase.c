#include <stdio.h>
#include <string.h>

char* my_downcase(char* param_1){
    for (int i=0; param_1[i] !='\0'; i++){
        if (param_1[i]>= 65 && param_1[i]<= 90){
         param_1[i] += 32;
        }
    }
    return param_1;
}
        /*
int main(){
    char *my_str = strdup("HELLO WORLD");
    printf("RANDOM CASE: %s\n", my_str);
    printf("DOWN CASE: %s\n", my_downcase(my_str));
    return 0;
}       */