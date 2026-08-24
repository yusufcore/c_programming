#include <stdio.h>
int add(int, int);
int mx(int, int);

int main(){
    int x, y;
    printf("Enter the values of x and y: \n");
    scanf("%d %d", &x,&y);
    int (*fn)(int,int);
   
    fn = &add;  // stores the address of function add();
    int aresult = fn(x,y);
    printf("Result = %d\n", aresult);
    fn = &mx;   // stores the address of function mx();
    int mresult = fn(x,y);
    printf("Result = %d\n", mresult);
    return 0;
   }
int add(int p, int q){
    return p + q;
}
int mx(int a, int b){
    return a * b;
}
