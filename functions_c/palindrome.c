// Program to check if a number is palindrome or not.

#include <stdio.h>
int reverse(int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverse(num));
    if(num == reverse(num)){
        printf("The number is Palindrome\n");
    }else{
        printf("The number is not Palindrome");
    }
}
int reverse(int n){
    int remainder, reverse = 0;
    while(n>0){
        remainder = n % 10;
        reverse = reverse *10 + remainder;
        n = n / 10;
    }
    return reverse;
}