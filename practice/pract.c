#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int r;
    srand(time(NULL));
    r = rand() % 5;
    int guess; 
    printf("Guess the number\n");
    while(1){
        scanf("%d", &guess);
        if(guess > r){
            printf("Guess lower\n:");
        } else if(guess < r){
            printf("guess higher\n:");
        }else{
            printf("you got it : %d\n", guess);
            return 0;
        }
    }
        
    //printf("the random number is %d\n", r);
}

