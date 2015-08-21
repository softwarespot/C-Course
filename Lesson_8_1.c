#include <stdio.h>

int main(void) {
    float days[30];

    printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n\n");
    printf("How many days:");

    int day;
    scanf("%d", &day);

    float sum = 0;
    for (int i = 0; i < day; i++) {
        printf("Enter the working hours for day %d:", (i + 1));
        scanf("%f", &days[i]);
        sum += days[i];
    }

    printf("Total hours worked: %.1f\n", sum);
    printf("Average length of day: %.1f\n", sum / day);
    printf("Hours entered: ");

    for (int i = 0; i < day; i++) {
        printf(" %.1f", days[i]);
    }
    printf("\n");

    return 0;
}
