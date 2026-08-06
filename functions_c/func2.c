#include <stdio.h>

// void drawline(void);  // function declaration.

// int main(){    
//     drawline();      // function call.
// }
// void drawline(void){    // function definition.
//     int i;
//     for(i=1; i<=80; i++){
//         printf("--");
//     }
// }


int sum(int x, int y);  // function declaration.

int main(){
    int a,b,s;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a,&b);
    s = sum(a,b);   // function calling.
    printf("Sum of %d and %d is %d\n", a,b,s);
}
int sum(int x, int y){   // defining a function.
    int s;
    s = x + y;
    return s;
}