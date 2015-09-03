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
        char first_name[20];
        char last_name[20];
        char phone_number[20];
    };
    // Array of person structures
    struct person persons[50];

    int person_count = 0;
    // Read the file and add the data to the persons array
    fscanf(fileOpen, "%d", &person_count);
    if (person_count > 0) {
        for (int i = 0; i < person_count; i++) {
            fscanf(fileOpen, "%s %s %s\n", &persons[i].first_name[0], &persons[i].last_name[0], &persons[i].phone_number[0]);
            printf("%s %s %s\n", persons[i].first_name, persons[i].last_name, persons[i].phone_number);
        }
        fclose(fileOpen);
    }

    return 0;
}
