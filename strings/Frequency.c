#include <stdio.h>
#include <string.h>
int main(){
    char* name = "Lucknow Junction";
    int i,j,count;
    for(i=0; i<strlen(name); i++){
        if(name[i] == ' ') continue;
        count = 0;
        for(j=0; j<strlen(name); j++){
            if(name[i] == name[j]){
                if(j<i) goto ab;
                count ++;
            }
        }
        printf("%c--%d\n", name[i], count);
        ab:
    }
    return 0;
}