#include <stdio.h>

int main(){
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    printf("%d\n", (int)sizeof(arr));
    printf("%d\n", (int)sizeof(arr[0]));
    printf("%d\n", (int)sizeof(arr[0][0]));
    int rows = sizeof(arr)/sizeof(arr[0]); 
    int columns = sizeof(arr[0])/sizeof(arr[0][0]);
    printf("No. of rows: %d\n", rows);
    printf("No. of columns: %d\n", columns);
    return 0;
}