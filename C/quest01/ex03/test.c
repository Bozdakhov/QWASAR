# include <stdio.h>

 int my_isalpha(char param_1)
{
    if((param_1>=97 && param_1<=122)||(param_1>=65 && param_1<=90)){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char x='a';
    printf("%d\n", my_isalpha(x));
    return 0;
}