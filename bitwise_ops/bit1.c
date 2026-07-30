// Number of 1s in its binary representation

#include <stdio.h>

// int main(){              

//     unsigned int x;
//     printf("Enter a positive integer: ");
//     scanf("%u", &x);  

//     int count = 0;
//     while(x!=0){
//         if((x & 1) == 1){
//             count ++;   // +1.
//         }
//         x = x >> 1;   // right shift.
//     }
//     printf("Number of ones => %d\n", count);
//     return 0;

// }


  
// optimised way --> it reduces the number of operations to be performed.
int main(){

    unsigned int x;
    printf("Enter a positive integer: ");
    scanf("%u", &x);  

    int count = 0;
    while(x){
        count ++;   
        x = x & (x-1);     
    }
    printf("Number of ones => %d\n", count);
    return 0;
    
}