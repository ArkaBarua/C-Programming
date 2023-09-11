#include "stdio.h"

int main() {

  int arr[3][2] = {{4, 5}, {10, 11}, {9, 11}};

  // use nested loop
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
    }
  }
  return 0;
}