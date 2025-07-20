#include <stdio.h>
#include <stdbool.h>

void printGreeting(char* aGreeting, char* aName);

int main(){
    printGreeting("hello", "Bub");
    return 0;
}

void printGreeting(char* aGreeting, char* aName){
    printf("%s, %s.\n", aGreeting, aName);
}
