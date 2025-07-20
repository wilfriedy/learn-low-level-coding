#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int r = rand() % 11;
    int guess;

    printf("Guess the number\n>");

    while(1){
        scanf("%d", &guess);
        
        if(guess < r){
            printf("Too low guess higher\n>");
        } else if(guess > r){
            printf("Too high guess lower\n>");
        } else{
            printf("Correct the answer is %d\n", r);
            
            return 0;
        }
    }
}
