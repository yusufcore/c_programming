#include <stdio.h>
struct student{
    char* name;
    int age;
    char gender;
}istudent = {"Mohammad Yusuf", 21, 'M'};  // can declare here also.
int main(){   // stores in the stackframe of main() during execution.
    //  struct student istudent;   
    // istudent.name = "Mohammad Yusuf";
    // istudent.age = 21;
    // istudent.gender = 'M';
    printf("Name: %s\n", istudent.name);
    printf("Age: %d\n", istudent.age);
    printf("Gender: %c\n", istudent.gender);
    return 0;
}
