#include <stdio.h>

int main(void)
{
    printf("Are you male or female (m/f)? ");
    char gender = getchar();

    printf("Enter your age: ");
    int age = 0;
    scanf("%d", &age);

	gender = toupper(gender);
    if (age >= 0 && age <= 55) {
        if (gender == 'M') {
            printf("You are a man in your best years!\n");
        } else if (gender == 'F') {
            printf("You are a beauty!\n");
        } else {
            printf("An error occurred in the program!\n");
        }
    } else if (age >= 56 && age <= 100) {
        if (gender == 'M') {
            printf("You are a wise man!\n");
        } else if (gender == 'F') {
            printf("You look young for your age!\n");
        }
    } else {
        printf("An error occurred in the program!\n");
    }

    return 0;
}
