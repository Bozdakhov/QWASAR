#include <stdio.h>
#include <unistd.h>

void my_putchar(char c){

 write(1, &c, 1);
}
    void  my_print_alphabet(){
        for (char letter = 'a'; letter <= 'z'; letter++){  
            my_putchar(letter);
        }
        my_putchar('\n');
    }

        /*
    int main(){
        my_print_alphabet();
        return 0;
    }

    //  char c = 'a';
    while (c <= 'z') {
    my_putchar(c);
    c++;
    }
    my_putchar('\n');
    }  */
