// to find if a number is in the power of 2 or not.

#include <stdio.h>

int main(){
    unsigned int x;
    printf("Enter an Integer: ");
    scanf("%u", &x);
    if((x&(x-1)) == 0){
        printf("Number is in power of 2\n");
    }else{
        printf("Number is not in the power of 2\n");
    }
    return 0;
}