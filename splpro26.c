#include <stdio.h>

// Define the structure
typedef struct {
    char name[50];
    int marks;
} Student;

int main() {
    FILE *file;
    Student students[100];
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &students[i].marks);
    }

    // Open the file in write mode.
    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Write the data to the file
    for (i = 0; i < n; i++) {
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    // Close the file
    fclose(file);

    printf("Data has been written to the file successfully.\n");

    return 0;
}

