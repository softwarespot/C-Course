#include <stdio.h>

int main(void) {
    printf("Enter an integer: ");

    int number;
    scanf("%d", &number);
    if (number > 0) {
        for (int i = 1; i <= number; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}
