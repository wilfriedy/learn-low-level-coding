#include <stdio.h>

int helloFunc();

int main(){
    printf("The return value is %d\n" ,helloFunc());
    printf("hello new compiler\n");
}

int helloFunc(){
    return 5;
}
