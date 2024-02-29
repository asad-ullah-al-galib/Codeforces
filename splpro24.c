#include <stdio.h>

int main() {
    FILE *file;
    long size;

    // Open the file in read mode.
    file = fopen("yourfile.txt", "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    fseek(file, 0L, SEEK_END);

    // Get the position of the file pointer which is now at the end of the file
    size = ftell(file);

    // Close the file
    fclose(file);

    printf("The size of the file is %ld bytes.\n", size);

    return 0;
}

