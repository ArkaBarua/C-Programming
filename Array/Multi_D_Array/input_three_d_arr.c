#include "stdio.h"

int main() {

  int numbers[3][2][2];
  // use nested loop 3 levels (input)
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {

        scanf("%d", &numbers[i][j][k]);
      }
    }
  }

  // use nested loop 3 levels (output)
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {

        printf("numbers[%d][%d] = %d\n", i, j, numbers[i][j][k]);
      }
    }
  }

  return 0;
}