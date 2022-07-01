#include <stdio.h>

int main()
{
    double a;

    printf("Enter a number (No Space):");
    scanf("%lf", &a);

    if (a > 0)
    {
        printf("This is a Positive Number\n");
    }
    else if (a < 0)
    {
        printf("This is a Negative number\n");
    }
    else if (a == 0)
    {
        printf("The number is Zero\n");
    }
    return 0;
}