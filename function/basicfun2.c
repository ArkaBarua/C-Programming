#include <stdio.h>
double add(double num, double num1); // this is a prototype
int main()
{

    double a, b, c;
    printf("Please Enter 2 numbers: ");
    scanf("%lf %lf", &a, &b);
    c = add(a, b);
    printf("%lf\n", c);
    return 0;
}
// we make function after the main function if we write a prototype at the first place
double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}