#include <stdio.h>

int main(void) {
    FILE *fileOpen = fopen("hello.usr", "w");
    if (fileOpen != NULL) {
        fprintf(fileOpen, "Hello world!\n");
        fclose(fileOpen);
        printf("Writing to the file was successful.\n");
    }
    printf("Closing the program.\n");

    return 0;
}
