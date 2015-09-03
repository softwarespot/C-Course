#include <stdio.h>

int main()
{
    // Read the sum of the files
    FILE *mataA = fopen("mata.txt", "r");
    if (mataA == NULL) {
        printf("Error opening file.");
        return;
    }

    FILE *mataB = fopen("matb.txt", "r");
    if (mataB == NULL) {
        printf("Error opening file.");
        return;
    }

    int index = 0, numbers[100];
    int number = 0;
    for (int i = 1; i <= 100; i++) {
        numbers[index] = 0;
        if ((i % 10) == 0) {
            fscanf(mataA, "%d\n", &number);
            numbers[index] += number;
            fscanf(mataB, "%d\n", &number);
            numbers[index] += number;
        } else {
            fscanf(mataA, "%d ", &number);
            numbers[index] += number;
            fscanf(mataB, "%d ", &number);
            numbers[index] += number;
        }
        index++;
    }
    fclose(mataA);
    fclose(mataB);

    FILE *filewrite = fopen("sum.usr", "w");
    if (filewrite == NULL) {
        printf("Error opening file.");
        return 0;
    }

    index = 0;
    for (int i = 1; i <= 100; i++) {
        if ((i % 10) == 0) {
            fprintf(filewrite, "%d\n", numbers[index]);
        } else {
            fprintf(filewrite, "%d ", numbers[index]);
        }
        index++;
    }

    fclose(filewrite);
    printf("The sum of the matrices has been calculated into the file sum.usr.\n");

    return 0;
}
