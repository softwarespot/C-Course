#include <stdio.h>

int *addressOfASmallestValue(int *numbers, int size);

int main(void)
{
    int numbers[] = { 21, 55, 5, 3, 43 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int *smallest = addressOfASmallestValue(numbers, size);

    // Deference the pointer to obtain the value
    printf("The smallest number in the array is: %d", *smallest);

    return 0;
}

int *addressOfASmallestValue(int *numbers, int size)
{
    // Dereference the pointer to obtain the value
    int min = *numbers;

    // Loop through the array skipping the first element as we know its value
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    return &min;
}
