#include <stdio.h>

int main(void)
{
    printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");

    int count = 0;
    int sum = 0;
    int choice = 0;
    do {
        printf("Enter score (4-10):");
        scanf("%d", &choice);
        if (choice >= 4 && choice <= 10) {
            sum += choice;
            count++;
        }
    } while (choice > 0);

    printf("You entered %d scores.\n", count);
    float average = (sum * 1.00) / count;
    printf("Average score: %.2f\n", average);

    return 0;
}
