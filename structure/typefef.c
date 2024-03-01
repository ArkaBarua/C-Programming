#include <stdio.h>
/*
** Defining typedef.
** Using typedef to change the structure type.
*/

/* typedef  int INTGER; */

/* int main(){ */

/*     INTGER var = 100; */

/*     printf("%d",var); */
/*     return 0; */
/* } */

typedef struct car1{

    char *engine;
    char *fule_type;
    int fule_tank_cap;
}car;

int main(){

    car car1;
    car1.engine = "DDR4";
    car1.fule_type = "CH4";
    car1.fule_tank_cap = 10;

    printf("%s\t%s\t%d\n",car1.engine, car1.fule_type, car1.fule_tank_cap);

    return 0;
}
