#include<stdio.h>

int main(){
    int scores[5];
    scores[0]= 81;
    scores[1]= 83;
    scores[2]= 85;
    scores[3]= 89;
    scores[4]= 91;

    //find sum of Scores
    int sum =0, i;
    for(i=0;i < 5;i++){
        sum += scores[i];
    }
    printf("Sum = %d\n",sum);

    //find average score
    printf("Average Score = %d\n",sum/i);
    //find highest score
    int max= scores[0];
    for(i =0;i < 5;i++){
        if(max < scores[i]){
            max = scores[i];
        }
    }
    printf("Highest score = %d",max);

    //minimum score
    int min = scores[0];
    for(i = 0; i < 5;i++){
        if(min < scores[i]){
            
        }

    }
    return 0;
}