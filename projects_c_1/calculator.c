#include<stdio.h>

int main(){

    float first_num, second_num;
    char operator;

    printf("Enter your operations +, -, /, * ( 10 + 20) :\n");
    scanf("%f %c %f", &first_num, &operator, &second_num);


if ( operator == '+'){
    printf("%f\n", first_num + second_num);
}else if (operator == '-')
{
    printf("%f\n", first_num - second_num);
}else if (operator == '/')
{
    printf("%f\n", first_num / second_num);
}else if (operator == '*')
{
    printf("%f\n", first_num * second_num);
}else {
    printf("There is an error please Check your operation\n");
}
return 0;
}
