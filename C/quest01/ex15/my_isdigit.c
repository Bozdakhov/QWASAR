#include <stdio.h>
#include <ctype.h>

int		my_isdigit(char param_1){
	if (param_1 >= 48 && param_1 <= 57){   //(param_1 >= '0' && param_1 <= '9') 
		return 1;
    } 
    else{
        return 0;
    }
}   