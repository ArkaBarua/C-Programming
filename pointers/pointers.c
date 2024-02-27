#include <stdio.h>

int main(){

    int x = 5;
    int *my_ptr = &x;
    int **my_d_ptr = &my_ptr;

    printf("x=%d, x_add = %p, my_ptr=%p\n",x,&x, my_ptr);

    printf("*my_ptr = %d\n",*my_ptr);

    printf("my_d_ptr = %p\n",my_d_ptr);
    printf("*my_d_ptr = %p\n",*my_d_ptr);
    printf("**my_d_ptr = %d\n",**my_d_ptr);


    return 0;
}
