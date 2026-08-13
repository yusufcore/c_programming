#include <stdio.h>

int main(){
    int arr[] = {5,7,9,11,2,6};
    printf("%d\n", (int)sizeof(arr));  // gives 24 (6(elements) * 4(size of each element)).
    printf("%d\n", (int)sizeof(arr[0]));   // gives 4 (which is the size of each element).
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("length = %d\n", length);    // 24/4 -> 6(no. of elements in the current array);

    return 0;
}