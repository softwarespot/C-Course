#include<stdio.h>

void changeNumber(int *x);

int main() {
  int x;
  printf("Enter the number x: ");
  scanf("%d", &x);
  printf("In the main program: x = %d\n", x);
  changeNumber(&x);
  printf("In the main program: x = %d\n", x);
  return 0;
}

void changeNumber(int *number) {
    *number += 3;
    printf("In the subroutine: x = %d\n", *number);
}
