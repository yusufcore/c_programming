void asc(int* a, int len){
     int temp,i,j;
     for(i=1; i<len; i++){
        for(j=1; j<len; j++){
            if(a[j-1] > a[j]){
              temp = a[j-1];
              a[j-1] = a[j];
              a[j] = temp;
            }
          }
       }
 }
void desc(int* a, int len){
      int temp,i,j;
      for(i=1; i<len; i++){
         for(j=1; j<len; j++){
            if(a[j-1] < a[j]){
              temp = a[j-1];
              a[j-1] = a[j];
              a[j] = temp;
            }
           }
        }
   }

void sort(int *a, int len, void(*fp)(int* ,int)){
     fp(a,len);
 }
 
