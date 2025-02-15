#include <stdio.h>
#include <string.h>

//char* my_strncpy(char* qwant_1, char* param_2, int param_3){
//    for(int i = 0; i < param_3; v++){qwant_1[v]=param_2[v];}return qwant_1;
//   } 
char* my_strncpy(char* param_1, char* param_2, int param_3){
    for(int i = 0; i<param_3; i++)
    {param_1[i] = param_2[i];}
    return param_1;
}   
 
        /*
char* my_strncpy(char* param_1, char* param_2, int param_3) {
    int i;
    for (i = 0; i < param_3 && param_2[i] != '\0'; i++) {
        param_1[i] = param_2[i];
    }
    for (; i < param_3; i++) {
        param_1[i] = '\0';
    }
    return param_1;
}       */
    /*
int main() {
    char str1[100] = "";
    char str2[] = "abc";
    int n = 2;

    printf("Input: \"%s\" && \"%s\" && %d\n", str1, str2, n);
    printf("Output:\n");
    printf("Return Value: \"%s\"\n\n", my_strncpy(str1, str2, n));

    char str3[100] = "";
    char str4[] = "RaInB0w d4Sh! ";
    int m = 6;

    printf("Input: \"%s\" && \"%s\" && %d\n", str3, str4, m);
    printf("Output:\n");
    printf("Return Value: \"%s\"\n\n", my_strncpy(str3, str4, m));

    char str5[100] = "";
    char str6[] = "Hello World";
    int p = 0;

    printf("Input: \"%s\" && \"%s\" && %d\n", str5, str6, p);
    printf("Output:\n");
    printf("Return Value: \"%s\"\n\n", my_strncpy(str5, str6, p));

    return 0;
}       */
