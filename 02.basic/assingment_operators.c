#include<stdio.h>

int main(void){
    int a = 10 ;
    //a = a + 5;
    a += 5;
    printf("%d\n",a);//15

    //a = a - 5;
    a -= 5;
    printf("%d\n",a);//10

    // a = a * 5;
    a *= 5;
    printf("%d\n",a);//50

    //a = a / 5 ;
    a /= 5;
    printf("%d\n",a);//10

    //a = a % 5 ;
    a %= 5;
    printf("%d\n",a);//0
    
    return 0;
}