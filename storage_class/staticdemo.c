#include <stdio.h>
void display();
static int y = 90;
int main(){
    int x = 10;
    // static int y = x;
    printf("y = %d\n", y);
    display();
    return 0;
}
void display(){
    printf("y = %d\n", y);
}

