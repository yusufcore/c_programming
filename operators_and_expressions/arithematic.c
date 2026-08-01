#include <stdio.h>
// Integer Arithemetic Operations.
// int main(void){

//     int a = 17, b = 4;
//     printf("Sum=%d\n", a+b);
//     printf("Subtraction=%d\n", a-b);
//     printf("Product=%d\n", a*b);
//     printf("Quotient=%d\n", a/b);
//     printf("Remainder=%d\n", a%b);
// }
// Floating point Arithemetic Operations.
int main(void){

    float a=12.4, b=3.1;
    printf("Sum=%.2f\n", a+b);
    printf("Difference=%.2f\n", a-b);
    printf("Product=%.2f\n", a*b);
    printf("a/b=%.2f\n", a/b);
} // Note -> %(Modulus) cannot be used with floating point numbers. It is only used with integer data types.
