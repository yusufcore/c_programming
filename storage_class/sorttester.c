#include<stdio.h>
#include "myheader.h"
void printer(int *,int);

int main(){
    int arr[] = {5,8,2,0,9,3,5,9,6};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array:\n ");
    printer(arr, length);
    sort(arr,length,asc);
    printf("Array in Ascending Order: \n");
    printer(arr, length);
    sort(arr,length,desc);
    printf("Array in Descending Order: \n");
    printer(arr, length);
    return 0;
 }
void printer(int *a, int len){
    int i;
    for(i=0; i<len; i++){
       printf("%d\t", a[i]);
    }
    printf("\n");
}

// function ka declaration by default extern hota hai;