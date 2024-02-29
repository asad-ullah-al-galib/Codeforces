#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 1, lines = 1;

    // Open the file in read mode.
    file = fopen("yourfile.txt", "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        // Check if character is a newline
        if (ch == '\n' || ch == '\0')
            lines++;

        // Check if character is a whitespace or newline
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    // Close the file
    fclose(file);

    printf("Characters : %d\n", characters);
    printf("Words      : %d\n", words);
    printf("Lines      : %d\n", lines);

    return 0;
}

