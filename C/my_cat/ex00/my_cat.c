#include <stdio.h>
#include <stdlib.h>
    /*
#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    // Check that at least one argument (in addition to the program name) was passed
    if (argc < 2) {
        printf("Usage: %s <file1> [<file2> ...]\n", argv[0]);
        return 1;
    }
    
    // Loop through the filenames passed as arguments
    for (int i = 1; i < argc; i++) {
        // Open the current file for reading
        FILE *file = fopen(argv[i], "r");
        if (file == NULL) {
            printf("Error: could not open file %s\n", argv[i]);
            return 1;
        }
        
        // Read the file contents into a buffer and print them to stdout
        char buffer[BUFFER_SIZE];
        size_t bytes_read;
        while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, file)) > 0) {
            fwrite(buffer, 1, bytes_read, stdout);
        }
        
        // Close the file
        fclose(file);
    }
    
    return 0;
}   */

#include <stdio.h>

int main(int argc, char **argv){
    int i = 1;
    char *s;
    char c;
    int n;

    while(i < argc){
        FILE *file = fopen(argv[i], "r");
        while(fread(&c, 1, 1, file)){
            printf("%c", c);
        }
        fclose(file);
        i ++;
    }
    return 0;
}