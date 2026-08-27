#include <stdio.h>

int main(){
    int i,j,temp;
    int arr[4][4] = {{1,2,3,4}, {5,6,4,8}, {9,15,10,12}, {10,20,30,40}};

    for(i=0; i<4; i++){
        for(j=0; j<i; j++){
             temp = arr[i][j];
             arr[i][j] = arr[j][i];
             arr[j][i] = temp;
            }
        }
    for(i=0; i<4; i++){
        for(j=0; j<4;j++){
            printf("\n");
            printf("%d\n", arr[i][j]); 
        }
    }
}

