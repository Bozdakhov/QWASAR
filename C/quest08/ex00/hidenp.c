int hidenp(char* param_1, char* param_2) {
    if (*param_1 == '\0') {  // empty string is hidden in any string
        return 1;
    }
    while (*param_2 != '\0') {
        if (*param_1 == *param_2) {
            param_1++;
            if (*param_1 == '\0') {  // reached end of s1, all characters found
                return 1;
            }
        }
        param_2++;
    }
    return 0;
}
