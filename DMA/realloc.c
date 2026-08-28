#include <stdio.h>
#include <stdlib.h> 

int main(){  
    int x = 10;
    int i;
    int* p = (int* )malloc(sizeof(int));
    *p = 20;
    printf("%d\n", *p);
    char* q = (char* )realloc(p, sizeof(char)); /* reallocates the same memory that is preoccupied by malloc(p);*/
    
    printf("%d\n", *q); 
    return 0;
}




