// to find the square root of any number.
#include <stdio.h>
#include <math.h> 

int main(){
    double n,s;
    printf("Enter a number: ");
    scanf("%lf", &n);
    s = sqrt(n);  // library function.
    printf("The Square root of %.2lf is: %.2lf\n", n, s);
}
// Compile using -->  gcc func1.c -o main -lm.
// -lm --> it is a linker flag that tells the linker to include the math library.