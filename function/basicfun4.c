#include<stdio.h>
//char fun();
char main(){
    char c = fun();//implicit declaration of function
    printf("charactor is c = %c\n",c);
    return 0;
}
char fun(){
    return 'a';
}