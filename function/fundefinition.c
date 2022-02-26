#include<stdio.h>
// https://www.youtube.com/watch?v=gF7wjwM9Jjs&list=PLBlnK6fEyqRi0Va6znG73P52rFfXD5fhs&index=3
//prototype of function
int add(int, int); //there is no need to mention the names of the parametes
int main(){
    int m = 20,n = 30,sum;
    sum= add(m,n); //while calling a function don't mention the return type of the function // also don't mention the data types of the arguments
    printf("sum is %d\n",sum); // sum = 50
    return 0;
}
//definiton of a function
int add(int a, int b){ // need to provied the return type of function and data types
    return (a + b); //passing the value of m & n to a & b ;a = 20 , b = 30
}

// An argument vs parameter

// Parameter: is a variable in declaration and definition of the function
// Argument: is the actual value of a parameter that gets passed to the function

//note: Parameter is also called a formal parameter and argument is also called as actual parameter

// sum= add(m,n);  arguments or actual parameters

// int add( int a, int b); formal parameters