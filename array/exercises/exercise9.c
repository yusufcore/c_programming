#include<stdio.h>
#define N 10

int main(){
    int i, a[N];
    a[0]=a[1]=1;

    for(i=2; i<N; i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/* output -> 1 1 2 3 5 8 13 21 34 55*/