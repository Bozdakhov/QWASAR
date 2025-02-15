int my_atoi(char* param_1) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Check for negative sign
    if (param_1[0] == '-') {
        sign = -1;
        i++;
    }

    // Convert each character to integer and add to result
    for (; param_1[i] != '\0'; i++) {
        if (param_1[i] >= '0' && param_1[i] <= '9') {
            result = result * 10 + (param_1[i] - '0');
        }
        else {
            return 0;  // Invalid input
        }
    }

    return sign * result;
}
