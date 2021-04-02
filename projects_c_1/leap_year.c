#include<stdio.h>

int main(){
     int year;
     int is_leapyear;
     printf("Enter Year:");
     scanf("%d", &year);

/*    if ( year % 4 == 0){

        if (year % 100 == 0){

            if ( year % 400 == 0){
                is_leapyear = 1;
            }
        }
        else{
            is_leapyear = 1;
        }
    }
    else{
        is_leapyear = 0;
}*/
if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
    is_leapyear = 1;
}
else{
    is_leapyear = 0;
}
printf("%d\n", is_leapyear);
    return 0;
}