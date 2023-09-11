#include "stdio.h"
int main() {

  int numbers[3][2];
  // input array

  // use nested loop
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%d", &numbers[i][j]);
    }
  }

  // use nested loop to print
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("arr[%d][%d] = %d\n", i, j, numbers[i][j]);
    }
  }

  return 0;
}