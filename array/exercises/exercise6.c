#include<stdio.h>
void swapvar(int a, int b);
void swaparr(int arr1[5], int arr2[5]);
int main(void){
    int a=4, b=6;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    swapvar(a,b);
    swaparr(arr1,arr2);
    printf("a=%d, b=%d\n", a,b);
    printf("arr1[0]=%d, arr1[4]=%d\n", arr1[0],arr1[4]);
    printf("arr2[0]=%d, arr2[4]=%d\n", arr2[0],arr2[4]);
    return 0;
}
void swapvar(int a, int b){
    int temp;
    temp = a, a=b, b=temp;  
}
void swaparr(int arr1[5], int arr2[5]){
    int i, temp;
    for(i=0;i<5;i++){
        temp=arr1[i], arr1[i]=arr2[i], arr2[i]=temp;
    }
}/*
values of a and b remains same as the swapping is performed on the copies of a and b and not on the actual a and b.
Output -> a=4, b=6;
      arr1[0]=6, arr1[4]=10;
      arr2[0]=1, arr2[4]=5   */