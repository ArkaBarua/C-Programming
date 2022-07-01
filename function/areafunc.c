#include <stdio.h>

double area_of_rect(double length, double breadth)
{
    double area;
    area = length * breadth;
    return area;
}
int main()
{
    double l, b;
    printf("Enter the length and breadth:");
    scanf("%lf %lf", &l, &b);
    double areaofrect = area_of_rect(l, b);
    printf("%lf\n", areaofrect);

    printf("Enter the length and breadth:");
    scanf("%lf %lf", &l, &b);
    double areaofrect2 = area_of_rect(l, b);
    printf("%lf\n", areaofrect2);

    return 0;
}