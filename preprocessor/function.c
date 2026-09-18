// function like macro

#include <stdio.h>
#define ADD(X,Y) X+Y 

int main(){
    int a = ADD(2,5);
    printf("%d\n", a);
    return 0;
}