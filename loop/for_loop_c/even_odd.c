#include <stdio.h>

int main()
{

    int i, j;

    printf("Enter Starting Number :");
    scanf("%d", &i);

    printf("Enter Ending Number :");
    scanf("%d", &j);

    for (i; i <= j; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d - is even\n", i);
        }
    }

    return 0;
}