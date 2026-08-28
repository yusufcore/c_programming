#include <stdio.h>
#include <stdlib.h> // to use malloc we must import standard library(stdlib.h), can also use #include <malloc.h>

int main(){  // stack frame of main() will load in stack.
    int x = 10;
    int* p = (int* )malloc(sizeof(int)); // memory is allocated in heap during rumtime.
    *p = ++x;
    printf("Value of p = %d\n", *p);
    return 0;
}




