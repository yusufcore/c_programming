#include <stdio.h>
int power(unsigned int x, unsigned int n);

int main(){
    unsigned int m, f;
    printf("Enter a number: ");
    scanf("%u", &m);
    printf("Enter the power: ");
    scanf("%u", &f);
    int result = power(m,f);
    printf("The integer %d to the power %d is %d\n", m,f, result);
    return 0;
}
int power(unsigned int x, unsigned int n){
    int i;
    int result = 1;
    for(i=1; i<=n; i++){
        result = result * x;
    }
    return result;
}