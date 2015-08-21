#include <stdio.h>

int main(void) {
    printf("Enter an integer: ");

    int firstNumber = 0;
    scanf("%d", &firstNumber);

    printf("The number is %d\n", firstNumber % 2);

    return 0;
}
