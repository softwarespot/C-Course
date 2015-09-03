#include <stdio.h>

int main(void) {
    int sum = 0;

    FILE *fileOpen = fopen("numbers.s", "r");
    if (fileOpen != NULL) {
        int number1 = 0;
        int number2 = 0;
        int number3 = 0;
        int number4 = 0;
        fscanf(fileOpen, "%d %d %d %d", &number1, &number2, &number3, &number4);
        fclose(fileOpen);
        printf("Numbers found in the file numbers.s:\n");
        printf("%d, %d, %d and %d\n\n", number1, number2, number3, number4);
        sum = number1 + number2 + number3 + number4;
    }
    printf("Sum of the numbers: %d\n", sum);

    return 0;
}
