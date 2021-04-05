#include<stdio.h>

int main(){
    int i, j, rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

// half pyramid
for (i = 0; i < rows; i++)
{
 
    for ( j = 0; j <= i; j++)
    {
        printf("* ");
    }
    printf("\n");
}
printf("\n\n");


//full pyramid
for(i = 0; i < rows;i++){
    for(j = i +1; j < rows; j++){
        printf(" ");
    }
    for ( j = 0; j <= i; j++)
    {
        printf("* ");
    }
    printf("\n");

}
    return 0;
}