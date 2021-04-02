#include<stdio.h>
// ! include<stdbool.h> - /media/arkabarua/New\ Volume/C_programming/02.basic/relational_operators.c
#include<stdint.h>

int main(){

    double a ,b;
    printf("Enter two numbers to know there relation: ");
    scanf("%lf %lf", &a,&b);

    printf("A = %lf, B = %lf\n",a ,b);

// '>' greater than
int a_is_greater = a > b;
printf("A is greater than B - %d\n", a_is_greater);

// '<' smaller than
int a_is_smaller = a < b;
printf("A is smaller than B - %d\n", a_is_smaller);

// '==' equal
int a_is_b = a ==b;
printf("A is B -%d\n", a_is_b);

// '!=' not equal 
int a_is_not_b = a != b;
printf("A is not B - %d\n", a_is_not_b);

//'>=' greater than or equal
int  a_greater_or_equal_b= a >= b;
printf("A is greater or equal B - %d\n",a_greater_or_equal_b);

//'<=' smaller or equal 
int a_smaller_or_equal_b = a <= b;
printf("A is smaller or equal to B - %d\n", a_smaller_or_equal_b);

//'!=' not equal
int a_not_equal_b = a != b;
printf("A is not equal B - %d\n", a_not_equal_b);

    return 0 ;

}