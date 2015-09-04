#include <stdio.h>

int main(void)
{
    printf("Enter the first number: ");
    int firstNumber = 0;
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    int secondNumber = 0;
    scanf("%d", &secondNumber);

    printf("%d+%d=%d\n", firstNumber, secondNumber, firstNumber + secondNumber);
    printf("%d-%d=%d\n", firstNumber, secondNumber, firstNumber - secondNumber);
    printf("%d*%d=%d\n", firstNumber, secondNumber, firstNumber * secondNumber);

    return 0;
}
