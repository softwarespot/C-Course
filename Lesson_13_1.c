#include<stdio.h>

int *addressOfASmallestValue(int *numbers, int size);

int main(void) {
   int numbers[] = { 21, 55, 5, 3, 43};
   int size = 5;

   int *smallest = addressOfASmallestValue(numbers, size);

   printf("The smallest number in the array is: %d", *smallest);

   return 0;
 }

int *addressOfASmallestValue(int *numbers, int size) {
    int min = *numbers;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }

    return &min;
}
