#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int freque[256] = {0};                    // initialize all frequencies to 0
    int i, j, len;
    char c;

    for (i = 1; i < argc; i++) {            // iterate over each input string
        len = strlen(argv[i]);

        for (j = 0; j < len; j++) {         // iterate over each character in the string
            c = argv[i][j];
            freque[(int)c]++;
        }
    }

    for (i = 0; i < 256; i++) {             // print the frequency of each character
        if (freque[i] > 0) {
            printf("%c:%d\n", i, freque[i]);
        }
    }

    return 0;
}





