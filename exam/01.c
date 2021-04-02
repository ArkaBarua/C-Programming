#include<stdio.h>
// #include<stdblool.h> -  /media/arkabarua/New\ Volume/C_programming/02.basic/logical_operators.c
int main(){

    int has_nid = 0;
    int has_passport = 1;
    int is_adult = 1;

    int is_permited = (has_nid || has_passport) &&  is_adult;
    printf("Permission - %d\n",is_permited);

    //{
        int a = 60;
        int b = 60;
        int not_same = a != b;
        printf("%d\n", not_same);


    //}
    return 0;
}
/*
    Logical And 
    -------------

    A       B       Result
    true    true    true
    false   false   false
    true    false   false
    false   true    false

    Logical Or
    -------------
    A       B       Result
    true    true    true
    true    false   true
    false   true    true
    false   false   false

    Logical Not
    ------------
    A       Result
    true    false
    false   true
*/