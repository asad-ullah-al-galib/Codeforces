#include <stdio.h>

int main() {
    FILE *file;

    // Open the file in append mode. If the file does not exist, it will be created.
    file = fopen("yourfile.txt", "a");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Write the string to the file
    fprintf(file, "\nProgramming with file is fun");

    // Close the file
    fclose(file);

    printf("Text has been appended to the file successfully.\n");

    return 0;
}

