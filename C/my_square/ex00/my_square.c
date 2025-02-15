
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int x, y;
    
    if(argc != 3){
        return 0;
    }else{
        if(argv[1]){
            x = atoi(argv[1]);
        }
        if(argv[2]){
            y= atoi(argv[2]);
        }
    }
    for(int j= 0; j < y; j++){
        for(int i= 0; i < x; i++){
            //printf("%d -- %d\n", i, j);
            if(j == 0 && i == 0 ){
                printf("o");
            }
            else if( i== x-1&& j == 0){
                printf("o");
            }else if(i==0 && j == y-1){
                printf("o");
            }else if(i == x-1 && j==y-1){
                printf("o");
            }
            else if(j == 0){
                printf("-");
            }
            else if (j == y -1) {
                printf("-");
            }
            else if(i == 0){
                printf("|");
            }

            
            
            else if(i == x -1){
                printf("|");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    //int x = atoi(argv[1]);
    //int y = atoi(argv[2]);

    //printf("%d %d\n", x, y);
    
    return 0;
}