#include <stdio.h>

int main(){     
    int i;
    int j;

    for(i=1;i<=5;i++){    // for rows.

        for(j=5;j>=1;j--){    // columns.

            if(j > i){
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