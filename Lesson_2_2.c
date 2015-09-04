#include <stdio.h>

int main(void)
{
    int number = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    number = number * number;
    printf("The square of the number you entered is %d\n", number);

    return 0;
}
