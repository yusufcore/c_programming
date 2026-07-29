#include <stdio.h>

int main(){     
    int i;
    int j;

    for(i=1;i<=5;i++){    // for rows.

        for(j=1;j<=i;j++){    // columns.

            if(i > j){
                printf("  ");            
            }
            else{
            printf("* ");
            }
        }

        printf("\n");
    }
    return 0;
}