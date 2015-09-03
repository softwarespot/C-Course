#include <stdio.h>

int main(void) {
    printf("The program saves your first and last name into a file.\n");

    printf("Enter your first name:");
    char firstName[16];
    scanf("%s", &firstName[0]);

    printf("Enter your last name:");
    char lastName[21];
    scanf("%s", &lastName[0]);

    printf("File where you want to save your name:");
    char fileName[12];
    scanf("%s", &fileName[0]);

    FILE *fileOpen = fopen(fileName, "w");
    if (fileOpen != NULL) {
        fprintf(fileOpen, "%s %s\n", firstName, lastName);
        fclose(fileOpen);
        printf("Successfully saved the data!\n");
    }

    return 0;
}
