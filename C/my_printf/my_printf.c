#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
    
int push_str(char* str){       // print char
    int i = 0;
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
    return i;
}   

int my_strlen(char* pm){      // string length
    int i = 0;
    while(pm[i] != '\0'){
        i++;
    }
    return i;
}

char* my_reverse(char* pm){		// reverse string
    int tmpr = my_strlen(pm) - 1;
    char c;
    char* str = malloc(sizeof(char)* (tmpr +1));
    for(int i = 0; i < tmpr + 1; i++, tmpr--){            
        c = pm[i];
        str[i] = pm[tmpr];
        str[tmpr] = c;
    }
    return str;
}

char* int_to_char_two(int pm){    // convert number to string (number system 10)
    int i = 0, flag = 0;
    char* str = malloc(10);
    if(pm == 0){
        return "0";
    }else if(pm < 0){
        pm *= -1;
        flag = 1;
    }
    while(pm > 0){
        str[i++]= (char)(pm % 10 + 48);
        pm /= 10;
    }
      if(flag == 1){
        str[i++] = '-';
    }    
    str[i] = '\0';
    return my_reverse(str);
}

char* int_to_char(int pm){	    // convert number to string (number system 8)
    char* str = malloc(10);
    int i = 0;
    while(pm > 0){
        str[i++] = (char)(pm % 8 + 48);
        pm /= 8;
    }
    str[i] = '\0';
    return my_reverse(str);
}

char* dec_to_hex(unsigned long int pm, int nbr){    // convert number to string (number system 16)
    int tmpr = 0, i = 0;
    char* str = malloc(10);
    while(pm != 0){
        tmpr = pm % 16;

        if(tmpr < 10){
            tmpr = tmpr + 48;
        }
        else if(nbr == 1){
            tmpr += 55 + 32;
        }
        else{
            tmpr += 55;
        }
        str[i++] = tmpr;
        pm = pm / 16;   
    }
    str[i] = '\0';
    return my_reverse(str);
}

int my_printf(char* pm, ...){      // main work function
    int i = 0, res = 0, nbr = 0;
    char s_tmpr;
    char* str;
    unsigned long int ld;
    va_list ap;
    va_start(ap, pm);
    while(pm[i]){
        if(pm[i] == '%'){
            i++;
            switch (pm[i]){        //switch case
                case 'c':
                i++;
                s_tmpr = va_arg(ap, int);
                res += write(1, &s_tmpr, 1);
                break;
                    
                case 's':
                i++;
                str = va_arg(ap, char*);
                if(str ==  NULL){
                   res += write(1, "(null)", 6);
                }
                else{
                    write(1, str, my_strlen(str));
                    res += my_strlen(str);
                }
                break;

                case 'd': 
                i++;
                nbr = va_arg(ap, int);
                str = int_to_char_two(nbr);
                res += push_str(str);
                break;

                case 'o':  
                i++;
                nbr = va_arg(ap, int);
                str = int_to_char(nbr);
                res += push_str(str);
                break;
                
                case 'u': 
                i++;
                nbr = va_arg(ap, unsigned int);
                if(nbr == 0){
                    res = push_str("0");
                }
                str = int_to_char_two(nbr);
                res += push_str(str);
                break;

                case 'x': 
                i++;
                nbr = va_arg(ap, int);
                str = dec_to_hex(nbr, 2);
                res += push_str(str);
                break;

                case 'p':
                i++;
                ld = va_arg(ap, unsigned long int);
                str = dec_to_hex(ld, 1);
                res += push_str("0x");
                res += push_str(str);
                break;
            }
        }
        else{
            res += write(1, &pm[i], 1);
            i++;
        }
    }
    return res;
}

int main() {
    my_printf("Hello, World!\n");    // Call my_printf function 
    return 0;
}