#include <stdio.h>

int main()
{
    int a = 27;
    int b = 26;

    int c = a > b ? 1 : 0;
    printf("Result= %d\n", c);

    int d = a <= b ? 1 : 0;
    printf("Result= %d\n", d);

    int f = a != b ? 1 : 0;
    printf("Result= %d\n", f);

    return 0;
}