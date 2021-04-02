#include<stdio.h>

int main(){
    int number;

    printf("Enter an Integer number to know it's Even or Odd\n");
    scanf("%d", &number);

    switch (number % 2)
    {
    case 0:
        printf("The number is a Even number\n");
        break;
    
    default:
        printf("The number is a Odd number\n");
    }
    return 0;
}