// find the sum of primary diagonal of a 2d array.
#include <stdio.h>

int main(){
    int i,j;
    int arr[4][4] = {{1,2,3,4}, {5,6,4,8}, {9,15,10,12}, {10,20,30,40}};
    int sum = 0;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i==j){
                sum = sum + *(*(arr+i)+j);
            }
        }
    }
    printf("The sum of the primary diagonal is: %d\n", sum);
    return 0;
}




// find the sum of secondary diagonal of a 2d array.
#include <stdio.h>

int main(){
    int i,j;
    int arr[4][4] = {{1,2,3,4}, {5,6,4,8}, {9,15,10,12}, {10,20,30,40}};
    int sum = 0;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if((i+j)==3){
                sum = sum + arr[i][j];
            }
        }
    }
    printf("The sum of the secondary diagonal is: %d\n", sum);
    return 0;
}