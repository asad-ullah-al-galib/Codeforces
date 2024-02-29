#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100
#define MAX_NAME 100

typedef struct {
    char name[MAX_NAME];
    int age;
    char disease[MAX_NAME];
} Patient;

Patient patients[MAX_PATIENTS];
int patientCount = 0;

void addPatient() {
    if (patientCount >= MAX_PATIENTS) {
        printf("Hospital is full.\n");
        return;
    }
    printf("Enter the name of the patient: ");
    fgets(patients[patientCount].name, MAX_NAME, stdin);
    patients[patientCount].name[strcspn(patients[patientCount].name, "\n")] = 0;  // Remove newline character
    printf("Enter the age of the patient: ");
    scanf("%d", &patients[patientCount].age);
    getchar();  // Remove newline character
    printf("Enter the disease of the patient: ");
    fgets(patients[patientCount].disease, MAX_NAME, stdin);
    patients[patientCount].disease[strcspn(patients[patientCount].disease, "\n")] = 0;  // Remove newline character
    patientCount++;
}

void updatePatient() {
    char name[MAX_NAME];
    printf("Enter the name of the patient to update: ");
    fgets(name, MAX_NAME, stdin);
    name[strcspn(name, "\n")] = 0;  // Remove newline character
    for (int i = 0; i < patientCount; i++) {
        if (strcmp(patients[i].name, name) == 0) {
            printf("Enter the new age of the patient: ");
            scanf("%d", &patients[i].age);
            getchar();  // Remove newline character
            printf("Enter the new disease of the patient: ");
            fgets(patients[i].disease, MAX_NAME, stdin);
            patients[i].disease[strcspn(patients[i].disease, "\n")] = 0;  // Remove newline character
            printf("Patient record updated successfully.\n");
            return;
        }
    }
    printf("Patient not found.\n");
}

void displayPatients() {
    printf("\nPatients:\n");
    for (int i = 0; i < patientCount; i++) {
        printf("Name: %s, Age: %d, Disease: %s\n", patients[i].name, patients[i].age, patients[i].disease);
    }
}

int main() {
    while (1) {
        printf("\n1. Add patient\n2. Update patient\n3. Display patients\n4. Exit\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);
        getchar();  // Remove newline character
        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                updatePatient();
                break;
            case 3:
                displayPatients();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
