#include <stdio.h>
#include <stdlib.h> 

int main(){  
    int x = 10;
    int i;
    int* p = (int* )malloc(sizeof(int));
    *p = 20;
    printf("%d\n", *p);
    free(p);  // converts p into a dangling pointer. 
    p = NULL;
    printf("%d\n", *p);  // gives core dump.
    return 0;
}




