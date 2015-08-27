#include <stdio.h>

int main(void) {
    printf("The program calculates the number of vowels.\n");
    printf("Enter a word:");

    char word[16];
    scanf("%s", &word[0]);

    int vowelCount = 0;
    for (int i = 0; i < 16; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            vowelCount++;
        }
    }

    printf("The word contains %d vowels.\n", vowelCount);

    return 0;
}
