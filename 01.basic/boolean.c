#include<stdio.h>
#include<stdint.h>

int main(){

    int user_logged_in = false;

if(user_logged_in){
    printf("user is logged in\n");
}
else {
    printf("user is logged out\n");
}

int user_logged_in2 = true;

if (user_logged_in2){
    printf("user is logged in\n");
}
else{
    printf("user is logged out\n");
}
return 0;
}