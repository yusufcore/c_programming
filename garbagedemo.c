#include <stdio.h>
void display();
void show();

int main(){
   auto int x = 10;
   printf("x = %d\n", x);
   display();
   show();
   return 0;
}
void display(){
    char a = 'b';
    printf("a = %c\n", a);
}
void show(){
    auto int b;
    printf("b = %d\n", b);
}
