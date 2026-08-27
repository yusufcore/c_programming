#include <stdio.h>

int main(){
   int arr[4][5] = {{2,4,5,6,7},{6,7,8,9,3}, {4,4,58,7,3}, {4,56,78,9,2}};
   int i, j;
   printf("%d\t", arr[3][3]);
   for(i = 0; i<4; i++){
      for(j = 0; j<5; j++){
          printf("%d\t", arr[i][j]);
  }
  printf("\n");
}
}
