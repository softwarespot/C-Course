#include <stdio.h>

int main(void) {
    printf("1: subtraction\n2: addition\n3: multiplication\nSelect function: ");

    int choice;
    scanf("%d", &choice);
    int firstNumber, secondNumber;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    switch (choice) {
        case 1:
            printf("%d-%d=%d\n", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case 2:
            printf("%d+%d=%d\n", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case 3:
            printf("%d*%d=%d\n", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        default:
            printf("No selection was made.");
            break;
    }

    return 0;
}
