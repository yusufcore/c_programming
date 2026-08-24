#include <stdio.h>

int main(){
    int a=5, b=6;
    printf("%d\t", a=b);  // value of b gets assigned in a;
    printf("%d\t", a==b);  // compares the two and returns 1 if equal.
    printf("%d %d\n", a,b);
    return 0;
}