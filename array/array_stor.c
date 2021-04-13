#include<stdio.h>

int main(){

    //long long
    char scores[5];
    scores[0]= 81;
    scores[1]= 83;
    scores[2]= 85;
    scores[3]= 89;
    scores[4]= 91;

    printf("%u\n",(unsigned int)&scores);
    printf("%u\n",(unsigned int)&scores[0]);
    printf("%u\n",(unsigned int)&scores[1]);
    printf("%u\n",(unsigned int)&scores[2]);
    printf("%u\n",(unsigned int)&scores[3]);
    printf("%u\n",(unsigned int)&scores[4]);
    return 0;
}