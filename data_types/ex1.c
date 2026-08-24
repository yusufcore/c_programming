#include <stdio.h>

int main(){
    int a = -3;
    a = -a-a+!a;   // -a --> -(-3)=3.  !a = 0;   3 - (-3) + 0 => 6.
    printf("%d\n", a);
    return 0;
}
