#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int naivealgo(char* str, char* ptr);
int main(){
    char hello[] = "Lucknow Junction";  
    char sec[] = "ncti";
    int result = naivealgo(hello, sec);   // function call.
    printf("%d\n", result);
    return 0;
}   
int naivealgo(char* str, char *ptr){   // Naive Algorithm.
    int index = -1; 
    int lens = strlen(str);
    int lenp = strlen(ptr);
    int i, j;
    for(i=0; i<(lens-lenp); i++){
        if(ptr[0]==str[i]){
            for(j=1;j<lenp;j++){
                if(ptr[j] != str[i+j]){
                    break;
                }
            }
            if(j==lenp){
                index = i;
                break;
            }
        }
    }
    return index;
}