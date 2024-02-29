#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 100

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

int main() {
    while (1) {
        printf("\n1. Add book\n2. Issue book\n3. Return book\n4. Remove book\n5. Display books\n6. Exit\nEnter your choice: ");
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
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
