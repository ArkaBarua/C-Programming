#include<stdio.h>

int find_min(int ara[],int);
int main(){
    int ara[] = {-100, 40, 50, -110, 33, 12, -120};
    int n = 7;
    int min = find_min(ara, n);
    printf("%d\n",min);
    return 0;
}
int find_min(int ara[], int n){
    int min = ara[0];
    for (int i = 0; i < n; i++)
    {
        if (ara[i] < min)
        {
            min = ara[i];
        }
        
    }
    return min;
}