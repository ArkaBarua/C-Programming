#include <stdio.h>

//'I', ' ','a','m',' ','A','r','k',' ','B','a','r,'u','a'
int main()
{

    char name[15];
    name[0] = 'I';
    name[1] = ' ';
    name[2] = 'a';
    name[3] = 'm';
    name[4] = ' ';
    name[5] = 'A';
    name[6] = 'r';
    name[7] = 'k';
    name[8] = 'a';
    name[9] = ' ';
    name[10] = 'B';
    name[11] = 'a';
    name[12] = 'r';
    name[13] = 'u';
    name[14] = 'a';

    printf("%s\n", name);
    return 0;
}
