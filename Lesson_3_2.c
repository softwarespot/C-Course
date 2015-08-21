#include <stdio.h>

int main(void) {
    float dollars;
    printf("Enter an amount in USD: ");
    scanf("%f", &dollars);

    float conversionFactor = 5.94573;
    float euro = dollars / conversionFactor;
    printf("USD converted to euro: %.2f\n", euro);

    return 0;
}
