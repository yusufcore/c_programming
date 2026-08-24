#include <stdio.h>

int main(){
    int *ptr, a, b, c;
    a=5; b=11; c=20;
    ptr=&a; 
    *ptr=c;
    ptr=&c;
    a=*(&b);
    c=*ptr-a;
    printf("%d\n", c);
    return 0;
}
// answer -> 9.