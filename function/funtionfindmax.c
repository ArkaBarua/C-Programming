#include<stdio.h>
int find_max(int ara[],int);
int main(){
    int ara[] = {-100, 40, 50, 22, 33, 12, 56};
    int n = 7;
    int max = find_max(ara, n);
    printf("%d\n",max);
    return 0;
}
int find_max(int ara[], int n){
    int max = ara[0];
    for (int i = 0; i < n; i++)
    {
        if (ara[i] > max)
        {
            max = ara[i];
        }
        
    }
    return max;
}