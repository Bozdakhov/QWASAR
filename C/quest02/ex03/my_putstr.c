#include <stdio.h>
#include <unistd.h>

int my_putchar(char c){
    return write(1, &c, 1); //системный вызов
}

void my_putstr(char* param_1)
{
    int i =0; 
    while (param_1[i] != '\0')
    {
        my_putchar(param_1[i]);
        i++;
    }

}
    /*
int main(){
    my_putstr("abc");
    my_putstr(" ");
    my_putstr("Abcdelle dzp ll 0");
    return 0;
}       */

//write

//int fd = fopen("file.txt", "w");
//            nomi       flag
//write(fd, &, 1);
//qayerga kiritishi,   adres,   bayt
