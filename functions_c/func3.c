// to find whether a number is even or odd.

#include <stdio.h>
void find(int n);  // func declaration.

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    find(num);    // func calling.
    return 0;
}
void find(int n){   // func definition.
    if(n%2==0)  
        printf("%d is even \n", n);
    else
        printf("%d is odd \n", n);
}