#include <stdio.h>

int main()
{

    int i, j, rows;
    printf("Enter row number to create a diamond:");
    scanf("%d", &rows);

    int stars, spaces;

    stars = 1;
    spaces = rows - 1;

    for (i = 1; i < rows * 2; i++)
    {
        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        for (j = 1; j < stars * 2; j++)
        {
            printf("*");
        }
        if (i < rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
        printf("\n");
    }
    return 0;
}