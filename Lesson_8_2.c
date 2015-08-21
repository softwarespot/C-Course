#include <stdio.h>

int main(void) {
    int matrix[5][5] = {
        4, 6, 25, 88, 5,
        34, 5, 300, 4, 65,
        78, 43, 11, 90, 125,
        98, 585, 12, 63, 21,
        45, 35, 9, 5, 1
    };

    printf("In the array:\n");

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    printf("\nthe sum of the elements is %d\n", sum);

    return 0;
}
