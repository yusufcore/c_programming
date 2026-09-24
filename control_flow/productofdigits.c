#include<stdio.h>
int main(){
    int n;
    int product = 1;
    int remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        remainder = n%10;   /* extract the last digit.*/
        product = product * remainder;   /* keep multiplying the extracted last digit.*/
        n = n/10; 
    }
    printf("Product of digits is %d\n", product);
    return 0;
}