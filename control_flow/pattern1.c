#include <stdio.h>

int main(){     // right angle triangle pattern.
    int i;
    int j;

    for(i=1;i<=5;i++){    // for rows.
        for(j=1;j<=i;j++){    // columns.
            printf("* ");
        }
        printf("\n");     // moves the cursor to the next line.
    }
    return 0;
}