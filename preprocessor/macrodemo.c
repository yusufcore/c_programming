#include <stdio.h>
#define AGE 30
//  Here, AGE is macro and 30 is substitution.
int main(){
    int x = AGE;
    printf("Age is %d\n", x);
    #undef AGE
    #define AGE 20
    printf("Age is %d\n", AGE);
    return 0;
}
// use -> gcc -E macrodemo.c  