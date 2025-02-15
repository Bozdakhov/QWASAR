#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    /*
int main(){
   // char *my_str  = strdup ("1234567890");
   char *my_str = malloc(100 * sizeof(char));
   strcpy(my_str, "1234567890");
   for(int x=0; my_str[x]; x++){
       printf("%s\n", my_str+x);
   }
        //
    printf("%s\n", my_str);
    printf("%s\n", my_str+1);
    printf("%s\n", my_str+2);
    printf("%s\n", my_str+3);
    printf("%s\n", my_str+4);
    printf("%s\n", my_str+5);
        //
    return 0;   
}   
     */

int main(){
    char *str = malloc(100 *sizeof(char));
    strcpy(str, "1234567890");
    for(int i=0; str[i]; i++){
        
    }
}