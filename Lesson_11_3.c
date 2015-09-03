#define PHONE_DIR "phonedir.txt"

#include <stdio.h>

int main(void) {
    FILE *fileOpen = fopen(PHONE_DIR, "r");
    if (fileOpen == NULL) {
        printf("Error opening file.\n");
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

    char firstName[20];
    char lastName[20];
    printf("Enter first name:");
    scanf("%s", &firstName[0]);

    printf("Enter last name:");
    scanf("%s", &lastName[0]);

    int is_found = -1, person_count = 0;
    // Read the file and add the data to the persons array
    fscanf(fileOpen, "%d", &person_count);
    if (person_count > 0) {
        for (int i = 0; i < person_count; i++) {
            fscanf(fileOpen, "%s %s %s\n", &persons[i].firstName[0], &persons[i].lastName[0], &persons[i].phoneNumber[0]);
            if ((strcmp(persons[i].firstName, firstName) == 0) && (strcmp(persons[i].lastName, lastName) == 0)) {
                is_found = i;
                break;
            }
        }
    }
    fclose(fileOpen); // Close the open handle

    if (is_found >= 0) {
        fileOpen = fopen(PHONE_DIR, "w");
        if (fileOpen == NULL) {
            printf("Error opening file.\n");
            return 0;
        }

        fprintf(fileOpen, "%d\n", (person_count - 1));

        for (int i = 0; i < person_count; i++) {
            if (i == is_found) {
                continue;
            }

            fprintf(fileOpen, "%s %s %s\n", persons[i].firstName, persons[i].lastName, persons[i].phoneNumber);
        }
        fclose(fileOpen);

        printf("Data removed from the directory.\n");
    } else {
        printf("%s %s was not found.\n", firstName, lastName);
    }

    return 0;
}
