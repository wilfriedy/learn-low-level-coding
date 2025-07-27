#include <stdio.h>

int main(){
    int myNumbers[] = {1,2,3,4,5};
    int i;  
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
   // printf("array length is %zu\n", len);
   printf("the last item is %d\n", myNumbers[-1]);
   return 0;
   for(i=0; i < 10; i++){
       printf("the value is %d at iteration number %d\n", myNumbers[i], i);
   }
}
