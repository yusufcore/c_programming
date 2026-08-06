// to find the largest of two numbers.
#include <stdio.h>
 int max(int x, int y);  // function declaration.

 int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    printf("Maximum of %d and %d is: %d\n", a,b, max(a,b));  // function calling.
    return 0;
 }
 int max(int x, int y){  // function definition.
    if(x>y) 
       return x;
    else 
       return y;   
 }