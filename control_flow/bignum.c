#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a,&b);
    if(a>b){   /*Relational operator- (>)Greater than is used. */
        printf("Bigger number is = %d\n", a);
    }else{
        printf("Bigger number is = %d\n", b);
    }
    return 0;
}