#include <stdio.h>
#include <string.h>
        /*
int my_strcmp(char* param_1, char* param_2){
    if(strlen(param_1) < strlen(param_2)){
        return 1;
    }else if(strlen(param_1) > strlen(param_2)){
        return -1;
    }else{
        return 0;
    }
}           */

int my_strcmp(char* param_1, char* param_2){
    for(int i=0; param_1[i] || param_2[i]; i++){
        if (param_1[i] != param_2[i]) {
            return param_1[i] - param_2[i];
        }
    }
    return 0;
}

    /*
int main() {
  char *s1 = "Hello";
  char *s2 = "Hello";
  
  printf("my_strcmp -> %d\n", my_strcmp(s1, s2));
  return 0
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = my_strcmp(str1, str2);
    printf("The result is: %d", result);
    return 0;
}       */