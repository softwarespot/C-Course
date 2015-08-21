#include <stdio.h>

int main(void) {
    printf("Enter an integer: ");

    int number1;
    scanf("%d", &number1);
    printf("Enter a decimal number: ");

    float number2;
    scanf("%f", &number2);
    printf("You entered the integer: %d\n", number1);
    printf("You entered the decimal number, rounded to two decimal places: %.2f\n", number2);

    return 0;
}
