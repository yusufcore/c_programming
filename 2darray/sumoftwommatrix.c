#include <stdio.h>

int main(){
    int a[3][3] = {{1,3,5}, {2,4,6}, {1,5,9}};
    int b[3][3] = {{1,3,4}, {1,7,6}, {7,5,8}};
    int c[3][3];
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];  // sum of two matrices.
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", c[i][j]);
        }
    }
    printf("\n");
    return 0;
}