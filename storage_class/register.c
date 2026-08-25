#include <stdio.h>

int main(){
   register int x = 6;
  /*   int *p = &x; */   
   int i;
   for(i = 0; i<100; i++){
      printf("x = %d\n", x);
   }
   return 0;
}
