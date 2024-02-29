#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100
#define MAX_NAME 100
#define FILE_NAME "patients.txt"

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
    printf("\nPatient added successfully!\n");
}

void searchPatientByName() {
    char name[MAX_NAME];
    printf("Enter the name of the patient to search: ");
    fgets(name, MAX_NAME, stdin);
    name[strcspn(name, "\n")] = 0;  // Remove newline character
    for (int i = 0; i < patientCount; i++) {
        if (strcmp(patients[i].name, name) == 0) {
            printf("\nPatient found:\n");
            printf("Name: %s, Age: %d, Disease: %s\n", patients[i].name, patients[i].age, patients[i].disease);
            return;
        }
    }
    printf("Patient not found.\n");
}

void searchPatientByDisease() {
    char disease[MAX_NAME];
    printf("Enter the disease to search for patients: ");
    fgets(disease, MAX_NAME, stdin);
    disease[strcspn(disease, "\n")] = 0;  // Remove newline character
    printf("\nPatients with %s:\n", disease);
    for (int i = 0; i < patientCount; i++) {
        if (strcmp(patients[i].disease, disease) == 0) {
            printf("Name: %s, Age: %d, Disease: %s\n", patients[i].name, patients[i].age, patients[i].disease);
        }
    }
}

void displayPatients() {
    printf("\nPatients:\n");
    for (int i = 0; i < patientCount; i++) {
        printf("Name: %s, Age: %d, Disease: %s\n", patients[i].name, patients[i].age, patients[i].disease);
    }
}

void savePatients() {
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < patientCount; i++) {
        fprintf(file, "%s\n%d\n%s\n", patients[i].name, patients[i].age, patients[i].disease);
    }
    fclose(file);
    printf("Patients saved successfully.\n");
}

void loadPatients() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    patientCount = 0;
    while (fgets(patients[patientCount].name, MAX_NAME, file) != NULL) {
        patients[patientCount].name[strcspn(patients[patientCount].name, "\n")] = 0;  // Remove newline character
        fscanf(file, "%d\n", &patients[patientCount].age);
        fgets(patients[patientCount].disease, MAX_NAME, file);
        patients[patientCount].disease[strcspn(patients[patientCount].disease, "\n")] = 0;  // Remove newline character
        patientCount++;
    }
    fclose(file);
    printf("Patients loaded successfully.\n");
}

int main() {
    while (1) {
        printf("\n1. Add patient\n2. Search patient by name\n3. Search patient by disease\n4. Display patients\n5. Save patients\n6. Load patients\n7. Exit\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);
        getchar();  // Remove newline character
        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                searchPatientByName();
                break;
            case 3:
                searchPatientByDisease();
                break;
            case 4:
                displayPatients();
                break;
            case 5:
                savePatients();
                break;
            case 6:
                loadPatients();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
