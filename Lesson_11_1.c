#define PHONE_DIR "phonedir.txt"

#include <stdio.h>

int main(void) {
    FILE *fileOpen = fopen(PHONE_DIR, "r");
    if (fileOpen == NULL) {
        printf("Error opening file.");
        return 0;
    }

    // Create a person structure
    struct person {
        char fistName[20];
        char lastName[20];
        char phoneNumber[20];
    };

    // Array of person structures
    struct person persons[50];

    int personCount = 0;
    int personIndex = 0;

    // Read the file and add the data to the persons array
    fscanf(fileOpen, "%d", &personCount);
    if (personCount > 0) {
        for (int i = 0; i < personCount; i++) {
            fscanf(fileOpen, "%s %s %s\n", &persons[i].fistName[0], &persons[i].lastName[0], &persons[i].phoneNumber[0]);
            personIndex++;
        }
        fclose(fileOpen);
    } else { // Error, so default the count to zero
        personCount = 0;
    }

    // Add a new person to the persons array
    printf("Enter first name:");
    scanf("%s", &persons[personIndex].fistName);
    printf("Enter last name:");
    scanf("%s", &persons[personIndex].lastName);
    printf("Enter telephone number:");
    scanf("%s", &persons[personIndex].phoneNumber);

    // Increase the count and array index count
    personCount++;
    personIndex++;

    fileOpen = fopen(PHONE_DIR, "w");
    if (fileOpen == NULL) {
        printf("Error opening file.");
        return 0;
    }

    fprintf(fileOpen, "%d\n", personCount);
    for (int i = 0; i < personCount; i++) {
        fprintf(fileOpen, "%s %s %s\n", persons[i].fistName, persons[i].lastName, persons[i].phoneNumber);
    }
    fclose(fileOpen);
    printf("Successfully saved the data.\n");

    return 0;
}
