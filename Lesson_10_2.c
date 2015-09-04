#include <stdio.h>

int main(void)
{
    printf("The program calculates the number of vowels.\n");
    printf("Enter a word:");

    char word[16];
    scanf("%s", &word[0]);

    int count = 0;
    for (int i = 0; i < 16; i++) {
        word[i] = toupper(word[i]);
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            count++;
        }
    }

    printf("The word contains %d vowels.\n", count);

    return 0;
}
