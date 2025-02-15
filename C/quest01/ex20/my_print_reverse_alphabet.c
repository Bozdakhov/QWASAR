#include <stdio.h>
#include <unistd.h>    // needed for write()

void my_print_reverse_alphabet() {
    char c = 'z';
    while (c >= 'a') {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1);
}  

    /*
void my_putchar(char c) {
    write(1, &c, 1);
}

void my_print_reverse_alphabet() {
    char c = 'z';
    while (c >= 'a') {
        my_putchar(c);      // print character
        c--;        // move to the previous character
    }
    my_putchar('\n');       // print newline character
}
    
int main() {
    my_print_reverse_alphabet();
    return 0;
}       */
