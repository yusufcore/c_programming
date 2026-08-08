#include <stdio.h>
void func(void);

int main(){
    func();
    func();
    func();
    return 0;
}
void func(void){
    int a = 10;
    static int b = 10;
    printf("a= %d   b= %d\n", a,b);
    a++;
    b++;
}
// the variables that are declared as static retains the previous value even after the fucntion is executed.