#include <stdio.h>

int main(){
    int matrix[][3] = {{1,2,3}, {4,5}, {6}};
    size_t matrixLen = sizeof(matrix) / sizeof(matrix[0]);
    printf("the length is %zu\n", matrixLen);
    int i,j;
    for (i=0; i < matrixLen; i++){
        size_t arrSize = sizeof(matrix[i]) / sizeof(matrix[i][0]);
        for(j=0; j < arrSize; j++){
            printf("%d, ", matrix[i][j]);
        }
        printf("\n");
   } 
}
