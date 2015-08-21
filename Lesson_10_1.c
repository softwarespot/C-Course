#include <stdio.h>

int main(void) {
    printf("The program saves your first and last name into a file.\n");

    printf("Enter your first name:");
    char first_name[16];
    scanf("%s", &first_name[0]);

    printf("Enter your last name:");
    char last_name[21];
    scanf("%s", &last_name[0]);

    printf("File where you want to save your name:");
    char filename[12];
    scanf("%s", &filename[0]);

    int sum = 0;
    FILE *opening = fopen(filename, "w");
    if (opening != NULL) {
        fprintf(opening, "%s %s\n", first_name, last_name);
        fclose(opening);
        printf("Successfully saved the data!\n");
    }

    return 0;
}
