int main(void)
{
    printf("Enter an integer: ");
    int number = 0;
    scanf("%d", &number);

    if (number > 0) {
        int factorial = 1;
        for (int i = 1; i <= number; i++) {
            factorial = factorial * i;
        }
        printf("The factorial of %d is %d\n", number, factorial);
    }

    return 0;
}
