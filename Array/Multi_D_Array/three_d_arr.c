#include "stdio.h"

int main() {

  // this array can store upto 12 elements (3x2x2)
  int numbers[3][2][2] = {

      {{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}, {{9, 10}, {11, 12}}};

  // use nested loop 3 levels
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {

        printf("numbers[%d][%d] = %d\n", i, j, numbers[i][j][k]);
      }
    }
  }
  return 0;
}