#include <stdio.h>

int main(){
    char x = 1, y = 2;

    if(x & y)
        puts("Result of x & y is 1");
    if(x && y)
        puts("Result of x&&y is 1");

    return 0;
}