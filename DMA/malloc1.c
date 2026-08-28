#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int i;
    int x = 10;
    int* p = (int* )malloc(10 * sizeof(int)); 
    for(i=0; i<10; i++){
        p[i] = i;   // *(p+i) = i
    }
    for(i=0; i<10; i++){
        printf("%d\t", p[i]);  // *(p+i)
    }
    printf("\n");
    return 0;
}




