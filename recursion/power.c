#include <stdio.h>
float power(float a, int n);

int main(){
    float a,p;
    int n;
    printf("Enter a and n: ");
    scanf("%f%d", &a, &n);
    p=power(a,n);
    printf("%f raised to the power %d is %f\n", a,n,p);
}
float power(float a, int n){
    if(n==0){
        return 1;
    }else{
        return(a*power(a,n-1));
    }
}