int my_iterative_factorial(int param_1) {
    int result = 1;
    if (param_1 < 0) {
        return 0;
    }
    for (int i = 2; i <= param_1; i++) {
        result *= i;
    }
    return result;
}
