#include <stdio.h>
int main(){
    int i,j;
    int arr[4][4] = {{1,2,3,4}, {5,6,4,8}, {9,15,10,12}, {10,20,30,40}};
    int sum = 0;

    for(i=0; i<4; i++){
        // sum = sum + arr[i][i]; // primary diagonal.
        sum = sum + arr[i][3-i];  // secondary diagonal.
        }
    printf("The sum of the secondary diagonal is: %d\n", sum);
    return 0;
}