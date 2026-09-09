// to convert a given string from lowercase to uppercase.
#include <stdio.h>
#include <string.h>
int main(){
    char hello[] = "Lucknow Junction";  
    int i;
    printf("In Lowercase \n");
    for(i=0;i<strlen(hello);i++){
        printf("%c\t", hello[i]);   // prints the string before changing.
    }
    for(i=0; i<strlen(hello); i++){
        if(hello[i] == ' ')continue;   // skips the space.
        hello[i] = hello[i]^ 32;    // can use -32, also we can use bitwise ^32.
    }
    printf("\n");
    printf("In Uppercase \n");          
    for(i=0; i<strlen(hello); i++){
        printf("%c\t", hello[i]);   // prints the string after changing.
    }
    printf("\n");
    return 0;
}
// A--> 65, a-->97, their difference is 98-65 = 32.
