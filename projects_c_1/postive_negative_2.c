#include<stdio.h>

int main(){
    int a;
    printf("Enter a number(No Space):");
    scanf("%d", &a);

if (a != 0){
    switch (a > 0)
    {
    case 1:
        printf("This a positive number\n");
        break;
    case 0:
        printf("This is a Negative number\n");
    }
}
else{
    printf("The number is Zero\n");
}
    return 0;
}