#include <stdio.h>
int main() {

  // when bits are shifted left then trailing positions are filled with zeros
  char var = 3;             // 3 in binary = 0000 0011
  printf("%d\n", var << 1); // var<<1 ---> 0000 0110

  //
  return 0;
}