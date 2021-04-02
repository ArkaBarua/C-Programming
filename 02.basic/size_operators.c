#include<stdio.h>

int main(){
    char a = 'A';
    short b = 121;
    int c = 32343;
    long d = 12345567L;
    long long e = 123334556676LL;

    printf("Size of Char = %d\n", (int)sizeof(a));
    printf("Size of Short = %d\n", (int)sizeof(b));
    printf("Size of int = %d\n", (int)sizeof(c));
    printf("Size of Long = %d\n", (int)sizeof(d));
    printf("Size of Long Long = %d\n", (int)sizeof(e));

    return 0;
    }