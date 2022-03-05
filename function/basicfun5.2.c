#include<stdio.h>
double pi = 3.14;// pi is now a global variable
void my_fun(double pi){
    pi = 3.1416;// this is a local variable
    return;
}                                                    
int main(){                                         
    printf("%lf\n",pi); 
    my_fun(pi);
    printf("%lf\n",pi);
    return 0;
}