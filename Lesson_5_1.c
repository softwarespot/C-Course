#include <stdio.h>

int main(void) {
    printf("Enter an integer: ");
    int firstNumber = 0;
    scanf("%d", &firstNumber);

    /* A better approach is to use ternary: printf("The number is %s\n", (firstNumber % 2 == 0 ? "even" : "odd")); */
    if (firstNumber % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }

    return 0;
}
