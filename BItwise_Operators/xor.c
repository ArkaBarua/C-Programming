#include <stdio.h>

int main() {

  int a = 7, b = 4;
  a = a ^ b;
  /* 
  7 --> 0111
  4 --> 0100
  -----------
  3 <-- 0011
  */

  printf("%d\n", a);

  a = 4, b = 3;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("After Xor, a = %d, b = %d\n", a, b);

  return 0;
}