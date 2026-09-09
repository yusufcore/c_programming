#include <stdio.h>
struct protocol{
        unsigned int flag:32; // 4 bits of storage is allocated.
        unsigned int checksum:8;  // 8 bits of storage is allocated.
    }top;
int main(){
    top.flag = 12;
    printf("%u\n", top.flag);   //12
    top.flag = 15;
    printf("%u\n", top.flag);   //15
    top.flag = 17;
    printf("%u\n", top.flag);   // 1
    printf("%d\n", (int)sizeof(top));
    return 0;
}