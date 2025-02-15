#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_max_star_num(int total_layer_num){
    int max_star_num = 7;
    int step = 2;
    
    for(int i = 2; i <= total_layer_num; i++){
        int lines_num =  i + 4-1;
        
        for(int j=2; j <=lines_num; j++){
            max_star_num +=2;
        }
        max_star_num -=step;
        if(i+1 != 2 && (i+1) % 2 == 0){
            step += 2;
        }
    }
    
    return max_star_num;
}

int get_max_space_num(int total_layer_num){
    int max_star_num = get_max_star_num(total_layer_num);
    return max_star_num / 2;
}

int print_symbol(char sym, int num){
    for(int i = 0; i < num; i++){
        printf("%c", sym);
    }
}

int print_layer(int layer_index, int first_line_star_num, int max_space){
    int current_line_star_num = first_line_star_num;
    int lines_num = layer_index + 4 - 1;
    for(int i=1; i <= lines_num; i ++){
        int space_num = max_space - (current_line_star_num / 2);
        print_symbol(' ', space_num);
        print_symbol('*', current_line_star_num);
        printf("\n");

        current_line_star_num +=2;
    }
    return current_line_star_num - 2;
}

int print_body(int total_layer_num){
    int max_space = get_max_space_num(total_layer_num);
    int current_star_num =1;
    int step = 2; 
    for(int i=1; i <= total_layer_num; i ++){
        current_star_num = print_layer(i, current_star_num, max_space);
        if(i+ 1 != 2 && (i+1) % 2 == 0){
            step += 2;
        }
        current_star_num -= step;
    }

    return 0;
}

int print_base(int total_layer_num){
    int max_space = get_max_space_num(total_layer_num);
    int space_num = max_space - (total_layer_num / 2);

    if(total_layer_num % 2 == 0){
        space_num +=1;
    }
    
    for(int i = 1; i <= total_layer_num; i++){
        print_symbol(' ', space_num);
        print_symbol('|', total_layer_num);
        printf("\n");
    }
    return 0;
}

int print_tree(int total_layer_num){
        print_body(total_layer_num);
        print_base(total_layer_num);

}

int main(int ac, char** av) {
    if(ac > 1){
        char layers = av[1][0] - '0';
        if(layers > 0){
            print_tree(layers);
        }
    }
     return 0;
}