// use of return statement.
// 1) to terminate a function without returning any value.
#include <stdio.h>
void funct(int age, float ht);

int main(){
    int age;
    float ht;
    printf("Enter age and height: ");
    scanf("%d %f", &age, &ht);
    funct(age,ht);
}
void funct(int age, float ht){
    if(age>25){
        printf("Age should be less than 25\n");
        return;  // terminates the function here if condition is true and returns to main.
    }
    if(ht<5){
        printf("Height should be more than 5\n");
        return;
    }
    printf("Selected\n");
}