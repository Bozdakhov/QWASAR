int my_fibonacci(int param_1) {
    if (param_1 < 0) {
        return -1;  // Invalid input
    }
    else if (param_1 == 0) {
        return 0;  // Base case
    }
    else if (param_1 == 1 || param_1 == 2) {
        return 1;  // Base case
    }
    else {
        return my_fibonacci(param_1 - 1) + my_fibonacci(param_1 - 2);  // Recursive case
    }
}
