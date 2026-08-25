#include <stdio.h>
// normal swapping of two numbers.


// int main(){
//     int x=10, y=20, temp;
//     printf("x=%d\t y=%d\n", x, y);
//     temp = x;
//     x = y;
//     y = temp;
//     printf("x=%d\t y=%d\n", x,y);
//     return 0;
// }




void swap(int* , int*);
int main(){
    int x=10, y=20, temp;
    printf("x=%d\t y=%d\n", x, y);
    swap(&x,&y);
    printf("x=%d\t y=%d\n", x,y);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b = temp;
}
// reason why swapping did not happen?