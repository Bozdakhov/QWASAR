#include <string.h>
#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char* my_join(string_array* param_1, char* param_2){

    if(param_1->array == NULL && param_2[0] == 32){
        return 0;
    }
    char term[100]={" "};
    int z=0;
    char* mem=(char*)malloc(sizeof(char)*500);
    for(int x=0; x<param_1->size; x++){
        for(int y=0; y<strlen(param_1->array[x]); y++){
            term[z]=param_1->array[x][y];
            z++;
        }
        if(x<param_1->size-1){
            for(int a=0; a<strlen(param_2); a++){
                term[z]=param_2[a];
                z++;
            }
        }

    } 
    sprintf(mem, "%s", term);
    return mem;
}                     



/*  #ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include <stdio.h>
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

/*int my_strlen(char* param_3){
    int value=0;
    for(int f=0; param_3[f] !=0; f++){ value++;}
    return value;
}  

#include <string.h>
#include <stdlib.h>
string_array *arr = (string_array*)malloc(sizeof(string_array));
arr->size = 100;
arr->array = malloc(arr->size * sizeof(char*));
int i = 0;
while (i < arr->size) {
    arr->array[i] = strdup("Do or do not. There is no try.");
    i += 1;
}
char *result = my_join(arr, " ");


char* my_join(string_array* param_1, char* param_2){
char end[50]={" "};
int j=0;
for(int i=0; i<param_1->size; i++){
    for(int k=0; k<my_strlen(param_1->array[i]); k++){
        end [j]=param_1->array[i][k];
        j++;
    }
    if(i<param_1->size-1){
        for(int l=0; l<my_strlen(param_2); l++){
            end[j]=param_2[l];
            j++;
        }
    }
}
printf("%s", end);
    return end;

} 

// for strdup() and malloc()
/*  #include <string.h>
#include <stdlib.h>
string_array *arr = (string_array*)malloc(sizeof(string_array));
arr->size = 100;
arr->array = malloc(arr->size * sizeof(char*));
int i = 0;
while (i < arr->size) {
    arr->array[i] = strdup("Do or do not. There is no try.");
    i += 1;
}
char *result = my_join(arr, " ");
*/