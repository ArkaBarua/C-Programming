#include <stdio.h>

struct abc{

    int x;
    int y;
    int z;
};

int main(){
    struct abc var = {.y = 20, .x = 10, .z = 30};

    printf("%d %d %d\n",var.x, var.z, var.y);

    return 0;
}
