#include <stdio.h>
#include <stdlib.h>

void calculateAndPrint(int *, int);

int main(int argc, char *argv[]) {
  int sum = 0;
  int size = 5;
  int array[5];

  if(argc == 6) {
  // Program name and command line parameters
    for(int x = 0; x < argc - 1; x++) {
      array[x] = atoi(argv[x + 1]);
    }
    calculateAndPrint(array, size);
  } else {
    printf("Incorrect number of command line arguments\n");
  }

  return 0;
}

void calculateAndPrint(int *numbers, int size) {
    int sum = 0;
    printf("Elements of the array: ");
    for (int i = 0; i < size; i++) {
        printf("%d", numbers[i]);
        sum += numbers[i];
    }
    printf("Sum = %d", sum);
}
