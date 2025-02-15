#include <stdio.h>

 int my_isalpha(char param_1){
 
if (( param_1 >= 97 &&  param_1 <=122) || ( param_1 >=65  &&  param_1 <=90)) {   // ((p1 >= 'A' && p1 <= 'Z') || (p1 >= 'a' && p1 <= 'z'))  
    return 1;
}else {
return 0;
}
}



    
    

