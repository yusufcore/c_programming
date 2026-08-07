#include <stdio.h>

int arraysum(int arr[], int len){   // function definiton + declaration.
    int sum = 0;
    int i;
    for(i=0; i < len; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int a[] = {2,4,6,7,8,9,54,32,5,7,9,9,6,4,2,2,24,6,7};
    int length = sizeof(a) / sizeof(a[0]);
    int result = arraysum(a,length);   // function calling.
    printf("Sum = %d\n", result);
    return 0;
}