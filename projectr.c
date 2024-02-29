#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 100
#define FILE_NAME "library.txt"

typedef struct {
    char title[MAX_TITLE];
    int isIssued;
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full.\n");
        return;
    }
    printf("Enter the title of the book: ");
    fgets(library[bookCount].title, MAX_TITLE, stdin);
    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = 0;  // Remove newline character
    library[bookCount].isIssued = 0;
    bookCount++;
}

void issueBook() {
    char title[MAX_TITLE];
    printf("Enter the title of the book to issue: ");
    fgets(title, MAX_TITLE, stdin);
    title[strcspn(title, "\n")] = 0;  // Remove newline character
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            if (library[i].isIssued) {
                printf("The book is already issued.\n");
            } else {
                library[i].isIssued = 1;
                printf("Book issued successfully.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

void returnBook() {
    char title[MAX_TITLE];
    printf("Enter the title of the book to return: ");
    fgets(title, MAX_TITLE, stdin);
    title[strcspn(title, "\n")] = 0;  // Remove newline character
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            if (!library[i].isIssued) {
                printf("The book is not issued.\n");
            } else {
                library[i].isIssued = 0;
                printf("Book returned successfully.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

void removeBook() {
    char title[MAX_TITLE];
    printf("Enter the title of the book to remove: ");
    fgets(title, MAX_TITLE, stdin);
    title[strcspn(title, "\n")] = 0;  // Remove newline character
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            printf("Book removed successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void displayBooks() {
    printf("\nLibrary books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%s [%s]\n", library[i].title, library[i].isIssued ? "Issued" : "Available");
    }
}

void displayIssuedBooks() {
    printf("\nIssued books:\n");
    for (int i = 0; i < bookCount; i++) {
        if (library[i].isIssued) {
            printf("%s\n", library[i].title);
        }
    }
}

void saveLibrary() {
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < bookCount; i++) {
        fprintf(file, "%s\n%d\n", library[i].title, library[i].isIssued);
    }
    fclose(file);
    printf("Library saved successfully.\n");
}

void loadLibrary() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    bookCount = 0;
    while (fgets(library[bookCount].title, MAX_TITLE, file) != NULL) {
        library[bookCount].title[strcspn(library[bookCount].title, "\n")] = 0;  // Remove newline character
        fscanf(file, "%d\n", &library[bookCount].isIssued);
        bookCount++;
    }
    fclose(file);
    printf("Library loaded successfully.\n");
}

int main() {
    while (1) {
        printf("\n1. Add book\n2. Issue book\n3. Return book\n4. Remove book\n5. Display books\n6. Display issued books\n7. Save library\n8. Load library\n9. Exit\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);
        getchar();  // Remove newline character
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                issueBook();
                break;
            case 3:
                returnBook();
                break;
            case 4:
                removeBook();
                break;
            case 5:
                displayBooks();
                break;
            case 6:
                displayIssuedBooks();
                break;
            case 7:
                saveLibrary();
                break;
            case 8:
                loadLibrary();
                break;
            case 9:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
