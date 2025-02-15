#include <stdio.h>
char* my_strdup(char* param_1){
    int len= strlen(param_1);
    char *dup_str = (char *)malloc((len+1)* sizeof(char));
    strncpy(dup_str, param_1, len);
    dup_str[len]= '\0';
    return dup_str;
}
