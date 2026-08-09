#include <stdio.h>
int fib(int n);

int main(){
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=0; i<n;i++){
        printf("%d", fib(i));
    }
    printf("\n");
}
int fib(int num){
    if(num==0 || num==1){
        return 1;
    }else{
        return (fib(num-1) + fib(num-2));
    }
}