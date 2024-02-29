#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char task[50];
    int done;
} Task;

Task tasks[MAX];
int taskCount = 0;

void printTasks() {
    printf("\nTo-Do List:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. [%s] %s\n", i + 1, tasks[i].done ? "x" : " ", tasks[i].task);
    }
}

void addTask() {
    if (taskCount >= MAX) {
        printf("Error: Task list is full.\n");
        return;
    }
    printf("Enter a new task: ");
    fgets(tasks[taskCount].task, 50, stdin);
    tasks[taskCount].task[strcspn(tasks[taskCount].task, "\n")] = 0;  // Remove newline character
    tasks[taskCount].done = 0;
    taskCount++;
}

void completeTask() {
    int index;
    printf("Enter the number of the task to mark as done: ");
    scanf("%d", &index);
    getchar();  // Remove newline character
    if (index < 1 || index > taskCount) {
        printf("Error: Invalid task number.\n");
        return;
    }
    tasks[index - 1].done = 1;
}

int main() {
    while (1) {
        printf("\n1. Add task\n2. Complete task\n3. Print tasks\n4. Exit\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);
        getchar();  // Remove newline character
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                completeTask();
                break;
            case 3:
                printTasks();
                break;
            case 4:
                return 0;
            default:
                printf("Error: Invalid choice.\n");
        }
    }
}
