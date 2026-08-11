#include <stdio.h>

int main(){
    char a = 'x', *p1=&a;
    int b = 12, *p2=&b;
    float c = 12.4, *p3=&c;
    double d = 18.34, *p4=&d;

    printf("sizeof(p1)=%u, sizeof(*p1)=%u\n", sizeof(p1), sizeof(*p1));
    printf("sizeof(p2)=%u, sizeof(*p2)=%u\n", sizeof(p2), sizeof(*p2));
    printf("sizeof(p3)=%u, sizeof(*p3)=%u\n", sizeof(p3), sizeof(*p3));
    printf("sizeof(p4)=%u, sizeof(*p4)=%u\n", sizeof(p4), sizeof(*p4));
    return 0;

    /* note -> pointer ka size fix hai as per you system architecture, while the size of(*p1) and others is the no. of bytes
     it can can access as per the pointer type.*/
}