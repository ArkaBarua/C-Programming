#include<stdio.h>

int main(){
	char ch = 'c';
    int number;

while(ch == 'c'){
    printf("Enter an Integer number to know it's Even or Odd\n");
    scanf("%d", &number);

    switch (number % 2)
    {
    case 0:
        printf("The number is a Even number\n");
        break;
    
    case 1:
        printf("The number is a Odd number\n");
    }
    printf("Enter c to continue.Or q for quite:");
    scanf(" %c",&ch);
}
    return 0;
}