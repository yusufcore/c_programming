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
    printf("\n");
    printf("Address of a = %p\n", iptr);
    printf("Address of b = %p\n", fptr);
    printf("\n");
    printf("Address of iptr = %p\n", &iptr);
    printf("Address of fptr = %p\n", &fptr);
    printf("\n");
    printf("sizeof(a)  = %zu\n", sizeof(a));   // prints 4.
    printf("sizeof(b)  = %zu\n", sizeof(b));   // prints 4;
    printf("sizeof(iptr)  = %zu\n", sizeof(iptr));   // prints 8;
    printf("sizeof(fptr)  = %zu\n", sizeof(fptr));   // prints 8;

    return 0;
}  
