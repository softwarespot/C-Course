#include <stdio.h>

void calculation(void);
void difference(void);
void product(void);

int main(void) {
    int choice = 0;
    do {
        printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n<0: terminate the program\n");
        printf("Select calculation:");
        scanf("%d", &choice);
        if (choice < 0) {
            printf("Terminating the program...");
        } else if (choice == 1) {
            calculation();
        } else if (choice == 2) {
            difference();
        } else if (choice == 3) {
            product();
        } else {
            printf("You entered an invalid number.\n\n");
        }

    } while (choice > 0);

    return 0;
}

void calculation(void) {
    printf("Enter the first number:");
    int firstNumber = 0;
    scanf("%d", &firstNumber);
    printf("Enter the second number:");
    int secondNumber = 0;
    scanf("%d", &secondNumber);
    printf("%d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
}

void difference(void) {
    printf("Enter the first number:");
    int firstNumber = 0;
    scanf("%d", &firstNumber);

    printf("Enter the second number:");
    int secondNumber = 0;
    scanf("%d", &secondNumber);

    printf("%d - %d = %d", firstNumber, secondNumber, firstNumber - secondNumber);
}

void product(void) {
    printf("Enter the first number:");
    int firstNumber = 0;
    scanf("%d", &firstNumber);

    printf("Enter the second number:");
    int secondNumber = 0;
    scanf("%d", &secondNumber);

    printf("%d * %d = %d", firstNumber, secondNumber, firstNumber * secondNumber);
}
