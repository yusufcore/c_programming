#include <stdio.h>

// int main(){   // Nested For-Loop.
//     int i,j;
//     for(i=0;i<5;i++){         // outer loop.

//         for(j=0;j<5;j++){    // inner loop.

//             printf("i=%d\tj=%d\n", i,j);
//         }
//     }
// }


int main(){   // Nested For-Loop.
    int i,j;
    for(i=0;i<5;i++){
        
        // if(i==2)break;

        for(j=0;j<5;j++){
            
             if(j==2)break;

            printf("i=%d\tj=%d\n", i,j);
        }
    }
}