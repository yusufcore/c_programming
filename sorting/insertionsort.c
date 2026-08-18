#include <stdio.h>
void insertion(int *a, int len);
void printArray(int *a, int len);

int main(){
    int arr[] = {7,9,1,2,5,3,6,19};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting \n");
    printArray(arr, length);
    insertion(arr, length);
    printf("Array after soritng \n");
    printArray(arr, length);
    return 0;
}
void insertion(int *a, int len){
    int i;
    int j;
    int temp;
    for(i=1; i<len; i++){
        temp = a[i];
        j = i-1;
        while(j>=0 && temp<a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
void printArray(int *a, int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}
// time complexity -->  1+2+3+4+....+n
//  n(n+2)/2  --> an2 + bn + c;    -->    O(n2);