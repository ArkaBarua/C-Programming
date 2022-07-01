#include <stdio.h>
int find_average(int ara[], int);
int main()
{
    int ara[] = {100, 20, 40, 22, 45, 67, 78};
    int n = 7;
    int average = find_average(ara, n);
    printf("%d\n", average);
    return 0;
}
int find_average(int ara[], int n)
{
    int average, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ara[i];
    }
    average = sum / n;

    return average;
}