#include <stdio.h>

int main(){
    // Basic Data Types.

    int x = -10;   // stores signed integers(-10, 0, 42);
    unsigned int y = 24;   // stores unsigned integers(0,100,56).  --> non - negative values.
    printf("%d\n%u\n", x, y);
    float f = 3.14f;
    double j = 3.14159;
    printf("%f\n%f\n", f, j);
    char ch = 'A';
    unsigned char t = 200;
    printf("%c\n", ch);
    printf("ASCII value: %d\n", ch);   // prints the ASCII value of A.

    // Derived Data Types -> built using basic data types.

    int numbers[5] = {1, 2, 4, 5, 7};     // Array.
    for(int i=0; i<5; i++){
        printf("%d \n", numbers[i]);
    }
    int *ptr = &numbers[0];
    printf(*ptr);

    return 0;
}