        /*
int my_recursive_factorial(int param_1){   
    if (param_1 < 0) {
        return 0;
    }
    else if (param_1 == 0) {
        return 1;
    }
    else {
        return param_1 * my_recursive_factorial(param_1);
    }
}       */

int my_recursive_factorial(int param_1) {
    if (param_1 < 0) {  // Check for invalid input
        return 0;
    }
    else if (param_1 == 0 || param_1 == 1) {  // Base case
        return 1;
    }
    else {  // Recursive case
        return param_1 * my_recursive_factorial(param_1 - 1);
    }
}
