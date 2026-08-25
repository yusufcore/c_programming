#include <stdio.h>
void display();
extern int x;  // x is initialized in externdemo.c file and is used in this file using the extern keyword.
int main(){
   // extern int x;
   printf("x = %d\n", x);
   display();                                             
   return 0;
}
void display(){
   printf("x = %d\n", x);
}
