#include <stdio.h>
double pi = 3.14; // pi is now a global variable
void my_fun()
{
    pi = 3.1416; // this is a local variable
    return;
}
int main()
{
    printf("%lf\n", pi);
    my_fun();
    printf("%lf\n", pi);
    return 0;
}