// Pointers
#include <stdio.h>

int main(){
    int a = 9;
    float b = 10.07;
    int *iptr = &a;  // pointer iptr contains the address of a.
    float *fptr = &b;
    printf("%d\n", *iptr);  // dereferencing  --> we get 9 as output.
    printf("%d\n", *(&a));  // same result --> 9.
    printf("%f\n", *(&b));   // same result --> 10.07.
    printf("%.2f\n", *fptr);  // dereferencing  --> we get 10.07 as output.
    
    return 0;
}  
