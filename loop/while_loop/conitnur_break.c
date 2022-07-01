#include <stdio.h>
int main()
{

    int i, j;
    i = 1;
    j = 100;
    for (i; i <= j; i++)
    {
        if (i % 2)
        {
            continue;
        }

        printf("I = %d\n", i);
        //   if (i==5){
        //    break;
        //}
    }
    return 0;
}