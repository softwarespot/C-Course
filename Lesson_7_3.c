#include <stdio.h>

int largest(int number1, int number2, int number3);
int smallest(int number1, int number2, int number3);

int main(void) {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("Enter the 1. number:");
    scanf("%d", &num1);
    printf("Enter the 2. number:");
    scanf("%d", &num2);
    printf("Enter the 3. number:");
    scanf("%d", &num3);
    printf("Among the numbers you entered,\n");
    printf("the largest was %d and the smallest was %d.", largest(num1, num2, num3), smallest(num1, num2, num3));

    return 0;
}

int largest(int number1, int number2, int number3) {
    int largest = 0;
    if (number1 > number2 && number1 > number3) {
        largest = number1;
    } else if (number2 > number1 && number2 > number3) {
        largest = number2;
    } else {
        largest = number3;
    }

    return largest;
}

int smallest(int number1, int number2, int number3) {
    int smallest = 0;
    if (number1 < number2 && number1 < number3) {
        smallest = number1;
    } else if (number2 < number1 && number2 < number3) {
        smallest = number2;
    } else {
        smallest = number3;
    }

    return smallest;
}
