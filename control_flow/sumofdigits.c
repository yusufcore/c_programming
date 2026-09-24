#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    int remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        remainder = n%10;   // extract the last digit.
        sum = sum + remainder;   // keep adding the extracted last digit.
        n = n/10;
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}