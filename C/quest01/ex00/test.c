#include <stdio.h>
/*
int main(){
     int i =0;
     while(i<10){
         printf("%d", i);
         i ++;
     }
    for(int j=0; j<6; j++){   
     
 }
}.    */

/*
int main(){
    int i=6;
    while(i >= -4){
    
        i --;
        if(i%2 == 0){
            printf("%d ",i);
        }
    }
}.    */

#include <stdio.h>
#include <stdlib.h>

int sum(int p1, int p2){
    int result = p1 + p2;
    return result; //sum=result
}

void printing(){
    printing("Hello");
}

int main(){
    printing();
    //int x = 9;
    int x = sum(8,9);
    printf("%d\n", sum(8,9));
    return 0;
}