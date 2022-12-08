#include<stdio.h>

int main(){

FILE *fp;

char *fliename = "flie.txt";

fp = fopen(fliename, "w");

fprintf(fp, "This is a file created by my c programming!");
fprintf(fp, "I am using org mode to write and document this task.");

fclose(fp);

return 0;
}
