// to find if a number is in the power of 4 or not.

#include <stdio.h>

int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if((x &(x-1)) == 0){
        int position = 0;
        while(x!=0){
            position ++;
            x = x >> 1;
        }
        if((position & 1) == 1){
            printf("Number is in the power of 4\n");
        }else{
            printf("Number is not in the power of 4\n");
        }
    }else{
        printf("Not in the power of 4\n");
    }
       return 0;
}
// notes -->  (x&1)==0   (even)
//            (x&1)==1   (odd)