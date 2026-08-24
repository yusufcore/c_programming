#include <stdio.h>

int main(){
     int x = 5;
     int y = 2;
     float p, q;
     p = x / y;
     printf("p = %f\n", p);  // gives 2.000000
     q = (float) x/y;   // casting syntax --> (datatype)expression.
     printf("q = %f\n", q);  // gives 2.500000
     return 0;
}