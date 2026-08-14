#include <stdio.h>
void bubble(int *a, int len);
void printArray(int *a, int len);

int main(){
    int arr[] = {1,9,2,7,6,4};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting \n");
    printArray(arr, length);
    bubble(arr, length);
    printf("Array after soritng \n");
    printArray(arr, length);
    return 0;
}
void bubble(int *a, int len){
    int temp, flag;
    int i;
    int j;
    for(i=1; i<len; i++){
        flag = 0;

        for(j=1; j<=len-i; j++){

            if(a[j] > a[j-1]){

                flag = 1;
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                
            }
        }
        if(flag==0) break;
    }
}
void printArray(int *a, int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}
