#define PHONE_DIR "phonedir.txt"

#include <stdio.h>

int main(void)
{
    FILE *fileOpen = fopen(PHONE_DIR, "r");
    if (fileOpen == NULL) {
        printf("Error opening file.");
        return 0;
    }

    // Create a person structure
    struct person {
        char firstName[20];
        char lastName[20];
        char phoneNumber[20];
    };

    // Array of person structures
    struct person persons[50];

    int personCount = 0;

    // Read the file and add the data to the persons array
    fscanf(fileOpen, "%d", &personCount);
    if (personCount > 0) {
        for (int i = 0; i < personCount; i++) {
            fscanf(fileOpen, "%s %s %s\n", &persons[i].firstName[0], &persons[i].lastName[0], &persons[i].phoneNumber[0]);
            printf("%s %s %s\n", persons[i].firstName, persons[i].lastName, persons[i].phoneNumber);
        }
        fclose(fileOpen);
    }

    return 0;
}
