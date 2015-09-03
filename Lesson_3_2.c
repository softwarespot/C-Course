#include <stdio.h>

int main(void) {
    float dollars = 0;
    printf("Enter an amount in USD: ");
    scanf("%f", &dollars);

    float conversionFactor = 0.889;
    float euro = dollars / conversionFactor;
    printf("USD converted to EURO: %.2f\n", euro);

    return 0;
}
