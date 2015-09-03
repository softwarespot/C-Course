#include <stdio.h>

int main()
{
    // Read the sum of the files
    FILE *hMataA = fopen("mata.txt", "r");
    if (hMataA == NULL) {
        printf("Error opening file.");
        return;
    }

    FILE *hMataB = fopen("matb.txt", "r");
    if (hMataB == NULL) {
        printf("Error opening file.");
        return;
    }

    int index = 0, numbers[100];
    int number = 0;
    for (int i = 1; i <= 100; i++) {
        numbers[index] = 0;
        if ((i % 10) == 0) {
            fscanf(hMataA, "%d\n", &number);
            numbers[index] += number;
            fscanf(hMataB, "%d\n", &number);
            numbers[index] += number;
        } else {
            fscanf(hMataA, "%d ", &number);
            numbers[index] += number;
            fscanf(hMataB, "%d ", &number);
            numbers[index] += number;
        }
        index++;
    }
    fclose(hMataA);
    fclose(hMataB);

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
