#include <stdio.h>
// void printArray(int a[]);

// int main(){

//     int arr[] = {2,5,7,9,8,6};
//     printArray(arr);
//     return 0;
// }
// void printArray(int a[]){
//     int i;
//     int len = sizeof(a)/sizeof(a[0]);
//     for(i=0; i<len; i++){
//         printf("%d\t", a[i]);
//     }
//     printf("\n");
// }
/* prints only the elements at a[0] and a[1].
array does not pass in a function, only the address of its first element is passed in function. 
we can only pass pointer, so with that we have to pass the length of the array in the fucntion after calculating it in the main() function*/

void printArray(int *, int);

int main(){

    int arr[] = {2,5,7,9,8,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, len);
    return 0;
}
void printArray(int *a, int length){
    int i;
    for(i=0; i<length; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}