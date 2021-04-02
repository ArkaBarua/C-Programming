#include<stdio.h>

int main(){
    float marks;

    printf("Enter your marks(No space):");
    scanf("%f", &marks);
    if(marks <= 100){

        if (marks >= 80)
    {
            printf("Your grade is A+\n");
    }
        else if (marks >= 70)
    {
            printf("Your grade is A\n");
    }
        else if (marks >= 60 )
    {
        printf("Your grade is A-\n");
    }
        else if (marks >= 50)
    {
            printf("Your grade is B\n");
    }
        else if (marks >= 40)
    {
            printf("Your grade is C\n");
    }
        else if (marks >= 33)
    {
            printf("Your grade is D\n");
    }
        else if (marks < 0 )
    {
            printf("Negative  numbers aren't supported\n");
    }
        else{
            printf("Your grade is F\n");
    }
    }
    else{
        printf("The data you have inputted is not supported\n");
    }
    return 0;
}