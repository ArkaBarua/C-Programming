#include<stdio.h>

int main(){
    int my_array[5];
    //[0,0,0,0,0]
    my_array[0] = 5;
    my_array[1] = 8;
    my_array[2] = 10;
    my_array[3] = 15;
    my_array[4] = 20;
    my_array[5] = 25;

    printf("%d\n",my_array[0]);
    printf("%d\n",my_array[1]);
    printf("%d\n",my_array[2]);
    printf("%d\n",my_array[3]);
    printf("%d\n",my_array[4]);
    printf("%d\n",my_array[5]);

    return 0;
}