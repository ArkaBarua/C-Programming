#include <stdio.h>
// I wrote a function to get two numbers sum
double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}
int main()
{
    double a, b, c;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    c = add(a, b); // c vars value will be the result of add function
    printf("%lf\n", c);
    return 0;
}