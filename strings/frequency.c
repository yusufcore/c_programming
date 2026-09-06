#include <stdio.h>
#include <string.h>

void frequency(char* ); 

int main(){
    char* st = "lucknow junction";   // immutable
    frequency(st);  
    return 0;
}
void frequency(char* str){
    int freq[256] = {0};   // {0} --> initializes all the array indexes value to 0;
    int i;
    for(i=0;i<strlen(str);i++){       // runs n times.
        if(str[i]==' ')continue;     // skips to next element if a space is found.
        freq[str[i]]++;        // pass the value of str[i] in the freq[]array, and at that i index, increment it from 0 to 1, or as the no. of times the characters occur.
    }
    for(i=0;i<256;i++){     // runs 256 times.
        if(freq[i]>0){
            printf("%c\t%d\n", i, freq[i]);
        }
    }
}
// Time complexity --->  O(n), i.e  n+256, 256 is constant so 0(n).