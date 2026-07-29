#include <stdio.h>

int main(){    // Square pattern.
    int i;
    int j;

    for(i=0;i<5;i++){    // outer loop  -> rows
        for(j=0;j<5;j++){   // inner loop  -> columns
            printf("* ");
        }
        printf("\n");     // 
    }
    return 0;
}