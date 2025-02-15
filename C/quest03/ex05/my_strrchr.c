#include <stdio.h>
#include <string.h>

char* my_strrchr(char* qwerty_1, char param_2){
    int a;
    for (a = strlen(qwerty_1)-1; a >= 0; a--){
        if(qwerty_1[a] == param_2){
            qwerty_1 += a;
            return qwerty_1;
        }
    }
    return 0;
}
        /*
 int main() {
    char str1[] = "abcabc";
    char str2[] = "121212";
    char str3[] = "abc";
    char str4[] = "";
    char c1 = 'b';
    char c2 = '2';
    char c3 = 'd';
    
    printf("str1: %s\n", my_strrchr(str1, c1)); // expected output: bc
    printf("str2: %s\n", my_strrchr(str2, c2)); // expected output: 2
    printf("str3: %s\n", my_strrchr(str3, c3)); // expected output: (null)
    printf("str4: %s\n", my_strrchr(str4, c1)); // expected output: (null)
    return 0;
}      */ 

