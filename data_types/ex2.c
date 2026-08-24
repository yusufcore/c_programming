#include <stdio.h>

int main(){
    int a = 2, b = 1, c,d;
    c = a<b;  // 2<1 --> false(0) ==> c = 0;
    d = (a>b) && (c<b);  // 2>1 true(1) && 0<1 true(1)  ==> d = 1; 
    printf("c = %d, d = %d\n", c,d);  // gives c = 0 and d = 1;
    return 0;
}
