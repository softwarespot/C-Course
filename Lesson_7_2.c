#include <stdio.h>

void calculation(void);
void difference(void);
void product(void);

int main(void) {
    int choice;
    do {
        printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n<0: terminate the program\n");
        printf("Select calculation:");
        scanf("%d", &choice);
        if (choice < 0) {
            printf("Terminating the program...");
        }
        else if (choice == 1) {
            calculation();
        }
        else if (choice == 2) {
            difference();
        }
        else if (choice == 3) {
            product();
        }
        else {
            printf("You entered an invalid number.\n\n");
        }

    } while (choice > 0);

    return 0;
}

void calculation(void) {
    printf("Enter the first number:");
    int first_number;
    scanf("%d", &first_number);
    printf("Enter the second number:");
    int second_number;
    scanf("%d", &second_number);
    printf("%d + %d = %d", first_number, second_number, first_number + second_number);
}

void difference(void) {
    printf("Enter the first number:");
    int first_number;
    scanf("%d", &first_number);

    printf("Enter the second number:");
    int second_number;
    scanf("%d", &second_number);

    printf("%d - %d = %d", first_number, second_number, first_number - second_number);
}

void product(void) {
    printf("Enter the first number:");
    int first_number;
    scanf("%d", &first_number);

    printf("Enter the second number:");
    int second_number;
    scanf("%d", &second_number);

    printf("%d * %d = %d", first_number, second_number, first_number * second_number);
}
