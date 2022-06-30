#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //this is a static program
    /** const int PICKED_NUMBER = 9;
    int given_number;

    printf("Enter Your Choosen Number - ");
    scanf("%d",&given_number);

    if (given_number == PICKED_NUMBER){
        printf("Your won\n");
    }else{
        printf("You lose\n");
    }
    **/
    int picked_number, given_number;
    time_t t;

    srand((unsigned)time(&t));

    picked_number = rand() % 10 + 1;

    printf("Enter your choosen number (0 -10) = ");
    scanf("%d", &given_number);

    if (given_number == picked_number)
    {
        printf("Your won\n");
    }
    else
    {
        printf("You lose , Picked Number was %d\n", picked_number);
    }

    return 0;
}