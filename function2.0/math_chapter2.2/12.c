#include<stdio.h>
// math book page 41; 12 Number
double func(double);
int main(){
    double num, result;
    printf("Enter the value of f(x):\t");
    scanf("%lf",&num);
    result = func(num);
    printf("Result : %lf\n",result);
    return 0;
}
double func(double x){
    double sum = x*x*x*x + 5*x - 3;// f(x) = x**4 + 5x - 3
    return sum;
}
