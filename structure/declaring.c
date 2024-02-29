/*
** https://youtu.be/3pFSbSVIwKU?si=ChsdHeZLfoiLQcpx
*/

#include <stdio.h>

struct {
  char *engine;
} car1, car2;
int main() {

  car1.engine = "DDis 190 Engine";
  car2.engine = "1.2 L kappa";

  printf("%s\n", car1.engine);
  printf("%s\n", car2.engine);

  return 0;
}
